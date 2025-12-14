#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11100;
unsigned int var_2 = 3605871701U;
unsigned int var_5 = 490146670U;
short var_7 = (short)13249;
unsigned char var_10 = (unsigned char)37;
unsigned short var_15 = (unsigned short)53708;
short var_17 = (short)9796;
int zero = 0;
unsigned char var_19 = (unsigned char)96;
unsigned char var_20 = (unsigned char)162;
void init() {
}

void checksum() {
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
