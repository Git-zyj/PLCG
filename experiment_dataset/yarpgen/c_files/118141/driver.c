#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3864716503266616567LL;
signed char var_1 = (signed char)-53;
int var_2 = -388476564;
signed char var_3 = (signed char)-85;
unsigned short var_4 = (unsigned short)48032;
short var_5 = (short)-3575;
unsigned int var_6 = 1082352455U;
unsigned short var_7 = (unsigned short)48194;
unsigned short var_10 = (unsigned short)20617;
unsigned int var_11 = 1343053943U;
int var_12 = 735033360;
int var_13 = -548672582;
unsigned long long int var_14 = 219866294003938861ULL;
int zero = 0;
long long int var_15 = 2955487502303818566LL;
long long int var_16 = -2558525528278180490LL;
short var_17 = (short)23912;
signed char var_18 = (signed char)116;
int var_19 = 1889176246;
signed char var_20 = (signed char)-28;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3274926663U;
short var_23 = (short)-24819;
unsigned int var_24 = 3930697666U;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)22;
unsigned short arr_2 [13] [13] ;
unsigned char arr_3 [13] ;
unsigned int arr_4 [13] [13] ;
short arr_8 [13] [13] [13] ;
unsigned long long int arr_9 [13] ;
int arr_11 [13] [13] ;
short arr_15 [23] ;
short arr_16 [23] ;
unsigned short arr_19 [13] [13] [13] ;
long long int arr_23 [13] [13] [13] [13] ;
unsigned char arr_13 [13] [13] [13] [13] [13] ;
_Bool arr_14 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)60393;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 3326822521U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-5692;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 1029172258350098069ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 735785013;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (short)-24417;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (short)10812;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)13924;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -1226464808038595467LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
