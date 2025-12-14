#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2296236827384166634LL;
unsigned long long int var_5 = 12791918055951944159ULL;
unsigned short var_9 = (unsigned short)60012;
short var_11 = (short)-13664;
int zero = 0;
signed char var_19 = (signed char)-40;
unsigned int var_20 = 692602781U;
int var_21 = 1319817410;
void init() {
}

void checksum() {
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
