#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51384;
unsigned long long int var_1 = 9621032030856155699ULL;
unsigned short var_2 = (unsigned short)50;
int var_3 = 1719903649;
long long int var_4 = 7172540987933956922LL;
unsigned int var_5 = 1436380172U;
unsigned int var_6 = 2595615602U;
int var_7 = -1989671851;
short var_8 = (short)14156;
unsigned int var_9 = 1555859986U;
int zero = 0;
unsigned short var_10 = (unsigned short)52310;
unsigned long long int var_11 = 11558889523477712458ULL;
unsigned short var_12 = (unsigned short)29249;
short var_13 = (short)13579;
int var_14 = -86010325;
signed char var_15 = (signed char)113;
unsigned int var_16 = 3030195039U;
unsigned short var_17 = (unsigned short)16929;
unsigned int var_18 = 2013628289U;
unsigned short var_19 = (unsigned short)878;
signed char arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-17;
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
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
