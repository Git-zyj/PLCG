#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
unsigned char var_3 = (unsigned char)102;
unsigned char var_5 = (unsigned char)170;
unsigned char var_7 = (unsigned char)45;
_Bool var_8 = (_Bool)1;
long long int var_9 = 4064085099067166194LL;
long long int var_10 = -8485879105776600432LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 161165438202004456ULL;
unsigned char var_13 = (unsigned char)166;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)109;
_Bool var_16 = (_Bool)1;
long long int var_17 = 3319276195589740616LL;
_Bool var_18 = (_Bool)0;
int var_19 = 1453832728;
_Bool var_20 = (_Bool)1;
long long int var_21 = 74682119626554213LL;
long long int var_22 = -8135786179829388549LL;
signed char var_23 = (signed char)-109;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)57919;
long long int var_26 = 892060905591738459LL;
int var_27 = 978067486;
unsigned short var_28 = (unsigned short)13520;
long long int var_29 = 7771658802587649464LL;
long long int arr_1 [21] ;
unsigned short arr_2 [21] ;
unsigned char arr_3 [21] [21] ;
_Bool arr_4 [21] ;
signed char arr_5 [21] [21] ;
_Bool arr_6 [21] [21] ;
long long int arr_8 [21] [21] [21] ;
_Bool arr_11 [21] [21] [21] [21] ;
unsigned char arr_12 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_13 [21] [21] [21] [21] [21] ;
long long int arr_15 [21] [21] [21] ;
unsigned long long int arr_18 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1231959600796625151LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45840 : (unsigned short)65281;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3893983733749039528LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 391417949307500608LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = 8728886022293523548ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
