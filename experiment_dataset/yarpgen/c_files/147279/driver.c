#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3817873653U;
int var_2 = -919381568;
unsigned char var_6 = (unsigned char)141;
unsigned char var_7 = (unsigned char)30;
int var_8 = 57918048;
unsigned short var_9 = (unsigned short)51318;
unsigned int var_10 = 2624007890U;
long long int var_11 = 757745449723038848LL;
signed char var_14 = (signed char)-106;
int zero = 0;
int var_15 = -1354556206;
unsigned short var_16 = (unsigned short)9717;
unsigned int var_17 = 608036715U;
int var_18 = -433994833;
int var_19 = 800214194;
unsigned char arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)82 : (unsigned char)166;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
