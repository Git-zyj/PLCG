#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16443164989287429280ULL;
short var_2 = (short)8141;
unsigned long long int var_3 = 4337656246912991060ULL;
int var_6 = 1437237069;
unsigned long long int var_9 = 9810533958064681263ULL;
int var_11 = 321223096;
unsigned short var_12 = (unsigned short)32190;
int zero = 0;
short var_19 = (short)17238;
unsigned long long int var_20 = 16077153750625616720ULL;
unsigned long long int var_21 = 18139391425980082860ULL;
unsigned char var_22 = (unsigned char)208;
unsigned short var_23 = (unsigned short)51760;
unsigned short arr_1 [16] ;
int arr_2 [16] [16] ;
short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)12932;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -1110160826;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-15797;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
