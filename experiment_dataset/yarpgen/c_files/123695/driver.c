#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1363646408U;
unsigned char var_3 = (unsigned char)214;
unsigned long long int var_4 = 14240095561046702116ULL;
long long int var_5 = -1617350217064310456LL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-20365;
int var_13 = 1784820412;
int zero = 0;
signed char var_14 = (signed char)-106;
unsigned int var_15 = 143128489U;
long long int var_16 = 201644838512854191LL;
signed char var_17 = (signed char)-57;
int var_18 = 1381955815;
unsigned long long int var_19 = 18062316058054794443ULL;
long long int arr_3 [24] [24] ;
unsigned char arr_7 [17] ;
int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -8446079960301356568LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = -506238424;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
