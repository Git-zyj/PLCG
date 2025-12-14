#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 375978326;
unsigned char var_3 = (unsigned char)246;
unsigned short var_6 = (unsigned short)48;
unsigned short var_8 = (unsigned short)4034;
long long int var_10 = 4040507242514440403LL;
int var_11 = 697422421;
unsigned short var_12 = (unsigned short)21305;
unsigned int var_13 = 2349229548U;
unsigned short var_16 = (unsigned short)700;
short var_17 = (short)-9355;
int zero = 0;
short var_18 = (short)-7907;
unsigned int var_19 = 3406257195U;
unsigned int var_20 = 611848137U;
unsigned int var_21 = 788435849U;
signed char arr_3 [20] [20] ;
unsigned long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 13552381008592476377ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
