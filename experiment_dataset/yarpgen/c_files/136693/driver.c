#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17897287117197114309ULL;
unsigned short var_4 = (unsigned short)8975;
signed char var_8 = (signed char)-78;
unsigned long long int var_10 = 3139404654832035548ULL;
unsigned short var_11 = (unsigned short)37938;
unsigned long long int var_12 = 12604365110744624515ULL;
int zero = 0;
long long int var_14 = 5674446326434453404LL;
unsigned short var_15 = (unsigned short)21280;
unsigned short var_16 = (unsigned short)34367;
short var_17 = (short)5789;
void init() {
}

void checksum() {
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
