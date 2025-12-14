#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2735883468520265268ULL;
short var_1 = (short)-12426;
long long int var_2 = 5784130568260202611LL;
unsigned long long int var_3 = 12942911482351700332ULL;
long long int var_4 = 3984782207262493795LL;
unsigned short var_5 = (unsigned short)27014;
unsigned int var_7 = 625801395U;
short var_8 = (short)11635;
unsigned short var_9 = (unsigned short)57415;
unsigned short var_10 = (unsigned short)39804;
unsigned int var_11 = 4256094025U;
unsigned int var_14 = 291925906U;
int zero = 0;
unsigned long long int var_16 = 10674029187546396595ULL;
short var_17 = (short)-22061;
short var_18 = (short)28750;
unsigned short var_19 = (unsigned short)12843;
short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)30596 : (short)2195;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
