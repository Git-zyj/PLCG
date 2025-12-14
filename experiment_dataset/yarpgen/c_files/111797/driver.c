#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
unsigned int var_1 = 1012512746U;
signed char var_4 = (signed char)-81;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)45;
int zero = 0;
unsigned long long int var_11 = 8605110248243746995ULL;
unsigned int var_12 = 770227075U;
short var_13 = (short)-15544;
unsigned int var_14 = 92396831U;
unsigned int var_15 = 1271937253U;
long long int var_16 = -7663293668327478906LL;
int var_17 = -487853654;
int var_18 = -2019408742;
unsigned int var_19 = 2943790989U;
unsigned short var_20 = (unsigned short)30202;
short var_21 = (short)-28079;
short var_22 = (short)16122;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 698478718U;
unsigned long long int var_25 = 2219967495046030985ULL;
short var_26 = (short)-212;
int arr_0 [13] ;
unsigned char arr_1 [13] ;
int arr_2 [13] ;
_Bool arr_7 [13] [13] [13] [13] ;
int arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 383622390;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 429763543;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 1850732196;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
