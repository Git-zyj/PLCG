#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1729834955U;
unsigned int var_2 = 470910843U;
_Bool var_3 = (_Bool)0;
short var_4 = (short)4412;
unsigned int var_6 = 3957178277U;
signed char var_7 = (signed char)-64;
unsigned char var_10 = (unsigned char)79;
long long int var_12 = 6647559864944109691LL;
unsigned short var_13 = (unsigned short)38070;
unsigned int var_14 = 4046666512U;
unsigned int var_15 = 4017982278U;
int zero = 0;
unsigned int var_16 = 3839024871U;
unsigned char var_17 = (unsigned char)102;
int var_18 = -702358490;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2239421989U;
_Bool arr_0 [12] [12] ;
unsigned long long int arr_2 [12] [12] ;
signed char arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 13948388424863212176ULL : 1371204246451831158ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-19 : (signed char)11;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
