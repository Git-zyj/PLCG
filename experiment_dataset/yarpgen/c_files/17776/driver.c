#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36117;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 525176941U;
long long int var_4 = -2364396286073771728LL;
long long int var_5 = -3626028192614370060LL;
unsigned long long int var_6 = 18129807954499747873ULL;
unsigned int var_9 = 2696274389U;
unsigned long long int var_13 = 15172948261810392736ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)17099;
unsigned int var_15 = 1805333514U;
int var_16 = -576624478;
long long int var_17 = -4690204103318056736LL;
unsigned short var_18 = (unsigned short)22937;
int var_19 = -329709893;
unsigned char var_20 = (unsigned char)38;
short var_21 = (short)-9395;
unsigned int var_22 = 2642944311U;
long long int var_23 = 3154777817646922517LL;
long long int var_24 = 8920809820540309157LL;
unsigned char var_25 = (unsigned char)156;
short var_26 = (short)-4552;
unsigned long long int var_27 = 5567425230464610011ULL;
signed char var_28 = (signed char)54;
unsigned long long int var_29 = 5640382325146444339ULL;
_Bool arr_0 [11] ;
unsigned short arr_5 [11] [11] [11] ;
_Bool arr_13 [12] [12] ;
unsigned long long int arr_17 [17] ;
short arr_2 [11] [11] ;
unsigned long long int arr_9 [11] [11] [11] ;
int arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)22974 : (unsigned short)38598;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 9525369725702656025ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)805 : (short)7644;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 463470909942747326ULL : 14167380603104368970ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -2062399554 : 1491402107;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
