#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 223840741U;
int var_4 = 1777680529;
long long int var_6 = -2583194124257306792LL;
int var_7 = 369294508;
int var_8 = -535218193;
unsigned long long int var_9 = 13508371933017620844ULL;
unsigned char var_10 = (unsigned char)239;
unsigned long long int var_11 = 3878131739168422495ULL;
unsigned long long int var_12 = 5127857808403082733ULL;
long long int var_14 = -1533770851398125797LL;
signed char var_15 = (signed char)107;
short var_16 = (short)-18264;
unsigned int var_17 = 93256376U;
int zero = 0;
short var_20 = (short)-13550;
long long int var_21 = -3585520089464495401LL;
short var_22 = (short)17197;
unsigned long long int var_23 = 12844378921892536064ULL;
unsigned short var_24 = (unsigned short)64155;
unsigned char var_25 = (unsigned char)192;
unsigned int var_26 = 87434524U;
short var_27 = (short)26826;
signed char var_28 = (signed char)108;
signed char var_29 = (signed char)-73;
_Bool var_30 = (_Bool)1;
long long int var_31 = -3543103581689240218LL;
signed char var_32 = (signed char)-92;
short var_33 = (short)-30607;
unsigned char var_34 = (unsigned char)141;
unsigned int var_35 = 3213308219U;
short var_36 = (short)7297;
signed char var_37 = (signed char)-114;
_Bool var_38 = (_Bool)1;
long long int var_39 = 8027761947018751367LL;
unsigned int var_40 = 3292425397U;
unsigned char var_41 = (unsigned char)149;
long long int var_42 = 480066681532234507LL;
signed char arr_0 [11] ;
_Bool arr_1 [11] ;
long long int arr_2 [11] [11] ;
long long int arr_10 [11] [11] ;
unsigned short arr_11 [11] [11] [11] [11] ;
unsigned short arr_12 [11] [11] [11] ;
unsigned int arr_14 [11] [11] [11] [11] [11] [11] ;
short arr_16 [11] [11] [11] [11] [11] ;
signed char arr_17 [15] [15] ;
unsigned short arr_18 [15] [15] ;
unsigned long long int arr_20 [15] ;
signed char arr_21 [15] [15] ;
unsigned int arr_22 [15] ;
short arr_32 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)69;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -3799733846221940633LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -239635053590194045LL : -2059023673921360013LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)19287;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)14774;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1345784764U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-32376 : (short)-25353;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)13867;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = 8318845625405113070ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 2414952404U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_32 [i_0] [i_1] = (short)-16005;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
