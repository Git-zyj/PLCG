#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)247;
long long int var_7 = 8283354972308711066LL;
unsigned int var_11 = 1832047824U;
unsigned char var_12 = (unsigned char)175;
unsigned char var_14 = (unsigned char)94;
int zero = 0;
unsigned char var_16 = (unsigned char)212;
long long int var_17 = -8249446953637083800LL;
signed char var_18 = (signed char)108;
unsigned long long int var_19 = 6110218214607693037ULL;
short var_20 = (short)-15062;
signed char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)109;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
