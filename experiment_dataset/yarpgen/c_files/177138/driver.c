#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
int var_1 = 1686035915;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)252;
unsigned int var_4 = 332805329U;
_Bool var_5 = (_Bool)1;
long long int var_6 = -7340250661229808957LL;
unsigned char var_7 = (unsigned char)228;
unsigned short var_9 = (unsigned short)15764;
unsigned long long int var_10 = 1664962823844225440ULL;
unsigned char var_11 = (unsigned char)6;
long long int var_12 = -3699446184880689572LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -8983612933594664835LL;
int var_15 = 1732173608;
unsigned int var_16 = 2892225566U;
unsigned short var_17 = (unsigned short)63693;
unsigned int var_18 = 3189596999U;
unsigned char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)227;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
