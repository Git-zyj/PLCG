#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)143;
unsigned int var_7 = 3484811385U;
int var_8 = -816443132;
unsigned short var_9 = (unsigned short)58416;
short var_10 = (short)13707;
unsigned long long int var_11 = 10754457505429669976ULL;
unsigned int var_12 = 1371009342U;
unsigned int var_14 = 2620003069U;
short var_15 = (short)27280;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)166;
unsigned int var_21 = 2262040354U;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3044075400U;
unsigned short var_24 = (unsigned short)60223;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 1073295030U;
short var_27 = (short)6127;
unsigned short var_28 = (unsigned short)30882;
unsigned long long int var_29 = 12947622303967601263ULL;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)58158;
unsigned long long int var_32 = 13227500560289702505ULL;
unsigned int arr_6 [23] [23] [23] [23] ;
unsigned char arr_8 [23] [23] [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
unsigned char arr_10 [23] [23] [23] [23] ;
int arr_11 [23] ;
unsigned short arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 544912852U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 17847341407692483522ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 924976733;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (unsigned short)25851;
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
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
