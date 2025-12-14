#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62491;
unsigned char var_1 = (unsigned char)98;
long long int var_2 = -4509106076758795960LL;
long long int var_6 = -528760241752207790LL;
int var_7 = 1651195127;
int var_14 = -2058686203;
int zero = 0;
long long int var_15 = -7346373613083058907LL;
unsigned int var_16 = 1733279362U;
signed char var_17 = (signed char)19;
unsigned long long int var_18 = 16483933075978024868ULL;
unsigned char var_19 = (unsigned char)128;
int var_20 = 1679038622;
int var_21 = -172665218;
unsigned long long int arr_14 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 3364103771525173704ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
