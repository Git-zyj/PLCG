#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 506460484510542980LL;
unsigned short var_2 = (unsigned short)2050;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 13581425U;
_Bool var_7 = (_Bool)0;
long long int var_9 = -7656418058037071287LL;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
unsigned long long int var_12 = 17571156470101378138ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 3272531939218856994LL;
short var_15 = (short)-23800;
long long int var_16 = -2184105576860634545LL;
unsigned short var_17 = (unsigned short)18522;
short var_18 = (short)-17771;
_Bool arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
unsigned long long int arr_2 [15] ;
int arr_3 [15] [15] ;
short arr_4 [15] [15] ;
unsigned long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 14789800413460846796ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -1283013995;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-11037;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 16409274609670828044ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
