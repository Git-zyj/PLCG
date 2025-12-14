#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17410435244175748513ULL;
unsigned int var_6 = 903371733U;
int var_9 = -1516628610;
unsigned int var_10 = 1279677593U;
unsigned char var_11 = (unsigned char)60;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)17001;
short var_17 = (short)-21991;
int zero = 0;
unsigned char var_18 = (unsigned char)25;
int var_19 = -1482787762;
unsigned short var_20 = (unsigned short)57268;
unsigned char var_21 = (unsigned char)47;
unsigned char var_22 = (unsigned char)200;
long long int var_23 = -1369815773286590317LL;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)23319;
long long int var_26 = -5361706282988117422LL;
short arr_0 [20] ;
unsigned int arr_3 [20] ;
short arr_11 [20] [20] [20] [20] [20] [20] ;
_Bool arr_13 [20] [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-32214;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2905602629U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-14864;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
}

void checksum() {
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
