#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2234920929738305870ULL;
signed char var_6 = (signed char)-107;
short var_12 = (short)22959;
int zero = 0;
unsigned long long int var_15 = 15503405459491290661ULL;
signed char var_16 = (signed char)-33;
unsigned short var_17 = (unsigned short)22324;
unsigned short var_18 = (unsigned short)20715;
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
