#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2347303536U;
signed char var_1 = (signed char)-104;
unsigned int var_2 = 3688072537U;
unsigned int var_3 = 627662713U;
signed char var_4 = (signed char)91;
unsigned char var_5 = (unsigned char)64;
unsigned int var_6 = 785715899U;
unsigned char var_8 = (unsigned char)30;
signed char var_9 = (signed char)67;
signed char var_10 = (signed char)-118;
unsigned int var_11 = 2533000063U;
unsigned int var_12 = 2816308063U;
unsigned int var_13 = 1185486915U;
signed char var_14 = (signed char)-49;
unsigned int var_16 = 1787068334U;
unsigned char var_17 = (unsigned char)241;
signed char var_18 = (signed char)66;
int zero = 0;
unsigned char var_19 = (unsigned char)225;
unsigned char var_20 = (unsigned char)4;
signed char var_21 = (signed char)23;
unsigned char var_22 = (unsigned char)58;
unsigned char var_23 = (unsigned char)37;
unsigned char var_24 = (unsigned char)220;
unsigned char var_25 = (unsigned char)181;
signed char var_26 = (signed char)71;
signed char var_27 = (signed char)-117;
unsigned char var_28 = (unsigned char)2;
unsigned char var_29 = (unsigned char)154;
unsigned int var_30 = 3538821124U;
signed char var_31 = (signed char)-111;
unsigned char arr_0 [14] ;
unsigned int arr_1 [14] ;
signed char arr_3 [14] [14] ;
unsigned char arr_8 [14] [14] [14] ;
unsigned char arr_9 [14] [14] [14] ;
unsigned int arr_11 [14] [14] [14] ;
unsigned char arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4210382143U : 3162131723U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)225 : (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2290836216U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)246 : (unsigned char)47;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
