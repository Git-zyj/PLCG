#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3142;
unsigned short var_1 = (unsigned short)51342;
short var_2 = (short)-16707;
short var_3 = (short)623;
unsigned short var_4 = (unsigned short)19927;
unsigned char var_6 = (unsigned char)149;
int var_7 = 189703710;
long long int var_8 = 2535347705757935958LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -1458094013568557389LL;
int var_11 = -406293255;
unsigned short var_12 = (unsigned short)4011;
signed char var_13 = (signed char)86;
unsigned long long int var_14 = 7449562994737932192ULL;
short var_15 = (short)23591;
unsigned int var_16 = 3296344473U;
signed char var_17 = (signed char)-73;
long long int var_18 = 7761552165945285570LL;
int var_19 = 27237941;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-122;
unsigned long long int var_22 = 12637031565210174451ULL;
signed char var_23 = (signed char)70;
signed char var_24 = (signed char)-93;
unsigned char var_25 = (unsigned char)219;
long long int var_26 = 3192861151512586320LL;
unsigned long long int var_27 = 714528172183938475ULL;
int var_28 = -1002957269;
int var_29 = -240836363;
signed char var_30 = (signed char)39;
unsigned long long int var_31 = 4731918684630159820ULL;
unsigned char var_32 = (unsigned char)78;
signed char arr_1 [13] ;
int arr_4 [13] [13] [13] [13] ;
long long int arr_5 [13] [13] [13] ;
short arr_8 [13] [13] ;
long long int arr_19 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = -1676157732;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2039304299296476311LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-16074;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -7392714399573018756LL : 325734747734490418LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
