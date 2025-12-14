#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2338633875240250431LL;
int var_4 = -598934886;
unsigned char var_6 = (unsigned char)238;
signed char var_7 = (signed char)-43;
signed char var_9 = (signed char)70;
int var_10 = 43885307;
signed char var_11 = (signed char)77;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)31;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5700779240100415090ULL;
unsigned short var_18 = (unsigned short)40916;
unsigned long long int var_19 = 2766840871578993705ULL;
unsigned int var_20 = 3380576189U;
_Bool var_21 = (_Bool)0;
signed char arr_0 [22] ;
_Bool arr_1 [22] ;
signed char arr_3 [22] ;
unsigned short arr_5 [24] ;
short arr_6 [24] ;
signed char arr_7 [24] ;
long long int arr_4 [22] ;
long long int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)265;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-6727;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -2151358659273637792LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 1324211365038777844LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
