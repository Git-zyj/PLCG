#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1390;
unsigned int var_4 = 1685813917U;
short var_6 = (short)-10719;
unsigned int var_9 = 226651380U;
signed char var_10 = (signed char)7;
short var_11 = (short)8506;
unsigned short var_12 = (unsigned short)15299;
int zero = 0;
signed char var_13 = (signed char)88;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)136;
unsigned short var_17 = (unsigned short)55801;
unsigned char var_18 = (unsigned char)33;
signed char var_19 = (signed char)5;
long long int var_20 = 4654071794823920129LL;
unsigned int var_21 = 545624793U;
short var_22 = (short)7975;
signed char var_23 = (signed char)79;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
short arr_0 [18] ;
_Bool arr_1 [18] [18] ;
signed char arr_2 [18] [18] ;
short arr_3 [18] ;
signed char arr_4 [18] ;
short arr_5 [18] ;
long long int arr_6 [18] [18] [18] ;
_Bool arr_7 [18] [18] [18] [18] ;
short arr_8 [18] [18] [18] [18] ;
short arr_10 [18] [18] [18] [18] ;
signed char arr_14 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-31114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-17565;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-16300;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4200221938373064792LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-8934;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)22276 : (short)20026;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)15;
}

void checksum() {
    hash(&seed, var_13);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
