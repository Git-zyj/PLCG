#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3491143112U;
signed char var_1 = (signed char)67;
unsigned short var_5 = (unsigned short)59390;
unsigned int var_8 = 863860247U;
long long int var_12 = -686559824819120102LL;
short var_13 = (short)28149;
unsigned short var_15 = (unsigned short)41294;
signed char var_16 = (signed char)7;
int zero = 0;
int var_19 = 1477488269;
signed char var_20 = (signed char)17;
long long int var_21 = -7434473523021261851LL;
unsigned long long int var_22 = 14617331980463306499ULL;
int var_23 = 1988279462;
unsigned int var_24 = 2940070302U;
short var_25 = (short)30827;
int var_26 = 2003763425;
unsigned int arr_1 [23] ;
unsigned long long int arr_2 [23] [23] ;
short arr_6 [11] [11] ;
long long int arr_3 [23] ;
unsigned char arr_7 [11] [11] ;
unsigned long long int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3109425902U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 10632056569886053118ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)863;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 733922768364573129LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)12 : (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 4991524481551474833ULL : 7307527652552869581ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
