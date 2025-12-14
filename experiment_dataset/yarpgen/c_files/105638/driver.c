#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
unsigned char var_1 = (unsigned char)141;
long long int var_2 = 7573448258755376732LL;
short var_3 = (short)-14843;
int var_4 = -1080327658;
unsigned long long int var_5 = 8025596153189031686ULL;
unsigned char var_6 = (unsigned char)166;
int var_7 = -2023379568;
unsigned int var_8 = 2250757305U;
unsigned char var_9 = (unsigned char)180;
int zero = 0;
short var_10 = (short)3232;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 15982374930496829114ULL;
int var_13 = -1604939809;
unsigned short var_14 = (unsigned short)22057;
short var_15 = (short)-8444;
unsigned long long int var_16 = 13441558536943839682ULL;
unsigned int var_17 = 853564591U;
_Bool arr_1 [19] ;
unsigned long long int arr_9 [19] [19] ;
_Bool arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 4413941386638657887ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
