#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1574398041;
unsigned int var_1 = 2494198520U;
unsigned int var_2 = 2984883869U;
unsigned int var_3 = 4078642728U;
_Bool var_4 = (_Bool)1;
int var_5 = -1784381335;
signed char var_6 = (signed char)80;
int var_7 = 414720533;
signed char var_8 = (signed char)42;
long long int var_9 = -2783770004855992841LL;
signed char var_10 = (signed char)-105;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)43209;
int zero = 0;
short var_14 = (short)-2969;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-25178;
unsigned char var_17 = (unsigned char)158;
short var_18 = (short)13409;
long long int var_19 = -7797125735063085734LL;
unsigned long long int var_20 = 13284356635011000891ULL;
unsigned int var_21 = 1719751222U;
int var_22 = -450842959;
unsigned short var_23 = (unsigned short)57786;
unsigned long long int var_24 = 6895864963170772976ULL;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)23157;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 8452925982758117150ULL;
long long int var_29 = 399721091326828212LL;
long long int arr_21 [18] [18] [18] [18] ;
unsigned short arr_24 [18] [18] ;
short arr_25 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -7253907112813732341LL : -3606934551347594372LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)34235 : (unsigned short)26999;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)30470 : (short)9204;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
