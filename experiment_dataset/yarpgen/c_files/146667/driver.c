#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4029439270U;
short var_1 = (short)9449;
unsigned long long int var_2 = 11096766778057631501ULL;
int var_4 = 1967200994;
signed char var_5 = (signed char)12;
signed char var_7 = (signed char)102;
unsigned short var_8 = (unsigned short)48696;
unsigned short var_10 = (unsigned short)40678;
int zero = 0;
signed char var_11 = (signed char)-117;
unsigned long long int var_12 = 3687518092328108885ULL;
unsigned long long int var_13 = 755780683533396294ULL;
short var_14 = (short)13365;
unsigned int var_15 = 958653369U;
unsigned long long int var_16 = 4563986608475861439ULL;
short var_17 = (short)11166;
signed char var_18 = (signed char)-115;
int var_19 = 69765661;
unsigned long long int var_20 = 10117147958366767144ULL;
signed char var_21 = (signed char)3;
unsigned short var_22 = (unsigned short)20357;
unsigned long long int var_23 = 3310737098375747989ULL;
long long int var_24 = -2759412233968494759LL;
short var_25 = (short)27850;
unsigned int arr_0 [10] ;
unsigned int arr_1 [10] ;
short arr_9 [12] [12] [12] ;
int arr_10 [12] [12] [12] [12] [12] ;
signed char arr_15 [12] [12] [12] [12] [12] [12] [12] ;
long long int arr_18 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3092320362U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1970103275U : 1128776220U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)2762;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 621832227;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (signed char)6 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = -5095230848558591137LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
