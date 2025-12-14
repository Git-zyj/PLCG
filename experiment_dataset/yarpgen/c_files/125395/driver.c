#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
signed char var_1 = (signed char)113;
unsigned long long int var_3 = 14080752206840039876ULL;
unsigned short var_4 = (unsigned short)32839;
int var_5 = 1868867013;
signed char var_6 = (signed char)59;
short var_7 = (short)28546;
unsigned short var_8 = (unsigned short)2438;
signed char var_9 = (signed char)-38;
_Bool var_10 = (_Bool)1;
long long int var_11 = 1745821955348893267LL;
unsigned short var_12 = (unsigned short)49219;
unsigned char var_13 = (unsigned char)138;
int var_14 = -1440842898;
unsigned long long int var_15 = 3325964142543341403ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)194;
unsigned char var_19 = (unsigned char)181;
unsigned char var_20 = (unsigned char)22;
int var_21 = -589554765;
unsigned long long int var_22 = 10452858461206439290ULL;
unsigned short var_23 = (unsigned short)11445;
signed char var_24 = (signed char)126;
int var_25 = 580223149;
short var_26 = (short)-26277;
long long int var_27 = 2409114730849293779LL;
signed char var_28 = (signed char)-3;
int var_29 = -151992995;
long long int var_30 = -2554125405066859241LL;
signed char arr_16 [24] ;
unsigned int arr_17 [24] [24] ;
int arr_21 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = 1319102444U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = -1387910317;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
