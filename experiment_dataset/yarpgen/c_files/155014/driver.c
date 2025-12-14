#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2376380696114454655LL;
unsigned char var_5 = (unsigned char)103;
unsigned int var_8 = 2224255811U;
long long int var_10 = -4529305196672554428LL;
_Bool var_14 = (_Bool)0;
short var_16 = (short)-11580;
long long int var_17 = 5160208276366497025LL;
long long int var_18 = -9167832547014728616LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1824688443U;
short var_21 = (short)-22614;
long long int var_22 = 6005069011711503762LL;
signed char var_23 = (signed char)-46;
unsigned char var_24 = (unsigned char)245;
long long int var_25 = -7101694270736081737LL;
unsigned short var_26 = (unsigned short)16870;
signed char var_27 = (signed char)-92;
unsigned char var_28 = (unsigned char)159;
signed char var_29 = (signed char)102;
signed char arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
unsigned short arr_2 [17] ;
unsigned char arr_4 [12] ;
_Bool arr_5 [12] ;
unsigned short arr_8 [12] ;
_Bool arr_12 [12] [12] [12] [12] ;
signed char arr_6 [12] [12] ;
unsigned short arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)40595;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned short)42103;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-53 : (signed char)6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64968 : (unsigned short)27494;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
