#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11263;
unsigned int var_4 = 4226961628U;
short var_5 = (short)11345;
unsigned long long int var_6 = 7253547516525290875ULL;
short var_8 = (short)21749;
unsigned int var_9 = 1360291088U;
unsigned long long int var_10 = 15769174355758204918ULL;
short var_11 = (short)27663;
int zero = 0;
unsigned int var_12 = 2433150781U;
long long int var_13 = 681748155644277710LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
