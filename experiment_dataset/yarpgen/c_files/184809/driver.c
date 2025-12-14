#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2828;
unsigned char var_4 = (unsigned char)157;
unsigned int var_5 = 4133829711U;
unsigned short var_6 = (unsigned short)8425;
long long int var_8 = 3080520629841648184LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)164;
long long int var_13 = 2494549862569831915LL;
int var_14 = 92067700;
unsigned short var_15 = (unsigned short)63406;
long long int var_16 = 8420607941391532492LL;
unsigned int var_17 = 1663398700U;
unsigned int arr_4 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1707864655U : 1212491439U;
}

void checksum() {
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
