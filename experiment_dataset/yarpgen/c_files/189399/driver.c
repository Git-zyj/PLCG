#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8995;
int var_14 = 1295829287;
int zero = 0;
unsigned long long int var_18 = 1816123474637895924ULL;
unsigned short var_19 = (unsigned short)22196;
unsigned short var_20 = (unsigned short)27432;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)53960;
unsigned short var_23 = (unsigned short)55938;
_Bool var_24 = (_Bool)0;
int var_25 = -2048440277;
unsigned char var_26 = (unsigned char)112;
unsigned short var_27 = (unsigned short)58293;
unsigned short var_28 = (unsigned short)65376;
signed char var_29 = (signed char)-82;
short var_30 = (short)18474;
unsigned short var_31 = (unsigned short)49253;
short var_32 = (short)17603;
signed char var_33 = (signed char)-23;
_Bool arr_0 [12] ;
signed char arr_1 [12] [12] ;
long long int arr_3 [12] [12] ;
unsigned int arr_4 [12] ;
int arr_5 [12] [12] ;
signed char arr_7 [12] [12] [12] [12] ;
unsigned long long int arr_8 [25] ;
short arr_10 [25] ;
signed char arr_17 [10] ;
unsigned short arr_22 [18] [18] ;
long long int arr_19 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -5954290476302418557LL : -129631608914268341LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2933486939U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1033775061 : -559544973;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 11966268432459178367ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (short)-13186;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)41;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)24187;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 5261770742485791660LL : -6756000137183375414LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
