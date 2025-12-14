#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14806074432518232756ULL;
short var_5 = (short)-2782;
unsigned long long int var_6 = 270723344738543872ULL;
unsigned long long int var_10 = 1021458094193096081ULL;
int zero = 0;
signed char var_17 = (signed char)32;
int var_18 = 1131870006;
unsigned int var_19 = 488840464U;
unsigned short var_20 = (unsigned short)13272;
short var_21 = (short)-22894;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
