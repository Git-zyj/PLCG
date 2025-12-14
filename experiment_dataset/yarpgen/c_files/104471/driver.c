#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1877799115U;
unsigned char var_2 = (unsigned char)253;
int var_3 = 803695211;
unsigned char var_4 = (unsigned char)239;
unsigned short var_5 = (unsigned short)61218;
unsigned long long int var_7 = 4510245851709714599ULL;
unsigned int var_9 = 4182640340U;
int zero = 0;
unsigned char var_10 = (unsigned char)140;
unsigned long long int var_11 = 696361877729739487ULL;
unsigned short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)16217 : (unsigned short)18827;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
