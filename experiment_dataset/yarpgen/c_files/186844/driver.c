#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 238857257;
signed char var_1 = (signed char)-110;
signed char var_2 = (signed char)-68;
unsigned int var_5 = 92299297U;
int var_9 = -1201306200;
long long int var_10 = 5835262613646695907LL;
unsigned long long int var_11 = 12675166904236167731ULL;
unsigned short var_12 = (unsigned short)29545;
int zero = 0;
unsigned short var_16 = (unsigned short)27657;
signed char var_17 = (signed char)88;
int var_18 = -144118142;
long long int var_19 = -903641031228556057LL;
unsigned int var_20 = 2873617115U;
unsigned short arr_2 [18] [18] [18] ;
unsigned short arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)60442;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)1226;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
