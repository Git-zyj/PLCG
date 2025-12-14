#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11290749882974699993ULL;
long long int var_3 = 9052067304001998801LL;
short var_4 = (short)1179;
short var_9 = (short)18896;
unsigned int var_11 = 2408376810U;
signed char var_15 = (signed char)-69;
int zero = 0;
long long int var_18 = -5801305597193188156LL;
unsigned short var_19 = (unsigned short)5724;
long long int var_20 = 5654814815460685663LL;
signed char var_21 = (signed char)26;
unsigned int var_22 = 3305078799U;
int var_23 = 250805084;
int var_24 = 1829860645;
long long int var_25 = 3785437204485668811LL;
int var_26 = -691851538;
unsigned short var_27 = (unsigned short)39313;
unsigned int arr_1 [20] ;
unsigned int arr_2 [20] [20] ;
short arr_4 [20] ;
_Bool arr_6 [20] ;
unsigned int arr_9 [20] [20] [20] [20] ;
unsigned short arr_14 [22] ;
unsigned int arr_16 [22] ;
short arr_18 [22] ;
_Bool arr_11 [20] [20] [20] [20] ;
unsigned int arr_12 [20] ;
_Bool arr_15 [22] [22] ;
unsigned long long int arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1187223439U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1479217924U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)16683;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2391776458U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)56341;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 1077267799U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (short)-31355;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 1867600929U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 3150271615142508239ULL : 13577912545793698661ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
