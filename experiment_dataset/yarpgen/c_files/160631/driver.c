#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18055136315267216973ULL;
short var_5 = (short)129;
int zero = 0;
unsigned long long int var_15 = 18049526848760026768ULL;
long long int var_16 = 3824627448163295453LL;
unsigned int var_17 = 2674782879U;
unsigned int var_18 = 294840844U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
