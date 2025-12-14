#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20156;
unsigned int var_2 = 2709413291U;
unsigned long long int var_3 = 16398395973336969622ULL;
short var_4 = (short)12122;
unsigned int var_5 = 786933629U;
short var_6 = (short)-26853;
short var_7 = (short)-14387;
short var_8 = (short)28918;
unsigned int var_9 = 413299448U;
short var_10 = (short)-14686;
unsigned char var_11 = (unsigned char)21;
unsigned long long int var_12 = 11857598836047726840ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4048725334U;
short var_15 = (short)-28956;
int zero = 0;
short var_17 = (short)29046;
int var_18 = 766231064;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17436338304582651848ULL;
short var_23 = (short)27358;
long long int var_24 = -2259921742912189514LL;
_Bool var_25 = (_Bool)0;
int var_26 = -1489897028;
unsigned long long int var_27 = 2121760814615435946ULL;
unsigned long long int var_28 = 5603818389765916242ULL;
int arr_0 [19] [19] ;
unsigned long long int arr_2 [19] [19] ;
short arr_10 [23] ;
short arr_3 [19] ;
unsigned long long int arr_8 [20] ;
unsigned long long int arr_22 [23] [23] [23] [23] [23] [23] ;
short arr_23 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1744617001;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 3918250192096800105ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (short)2943;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)6897;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 8564313645967907629ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 13413347617773464311ULL : 14587363305256619630ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (short)-10286;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
