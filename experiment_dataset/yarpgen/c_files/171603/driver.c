#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 550750342U;
signed char var_1 = (signed char)98;
signed char var_2 = (signed char)-106;
short var_3 = (short)-4831;
signed char var_4 = (signed char)-32;
long long int var_5 = 298979745563754067LL;
unsigned int var_6 = 2433253334U;
unsigned long long int var_7 = 10028584095401837633ULL;
unsigned short var_9 = (unsigned short)17150;
int var_11 = -1128676444;
int var_12 = 1506517313;
unsigned int var_14 = 2313660973U;
unsigned int var_15 = 102818538U;
unsigned int var_16 = 2600946315U;
int zero = 0;
long long int var_17 = -6994199503737187323LL;
short var_18 = (short)1609;
unsigned int var_19 = 2791683902U;
unsigned int var_20 = 945160116U;
unsigned int var_21 = 3075429085U;
unsigned int var_22 = 4253496442U;
unsigned long long int var_23 = 15391802286021337433ULL;
signed char var_24 = (signed char)-78;
short var_25 = (short)-20626;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 1904947411U;
int var_28 = 1748876750;
signed char var_29 = (signed char)-113;
long long int arr_3 [13] ;
short arr_4 [15] ;
int arr_5 [15] ;
short arr_7 [15] ;
unsigned int arr_8 [23] [23] ;
long long int arr_9 [23] [23] ;
signed char arr_10 [23] [23] ;
short arr_11 [23] ;
unsigned long long int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -2678000082143621135LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -1689838999;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)23951;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 68996860U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = -5110132591375931901LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (short)18565;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 4821965846390002166ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
