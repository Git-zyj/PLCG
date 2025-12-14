#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6636184444464475605LL;
short var_5 = (short)2086;
unsigned int var_6 = 943661520U;
_Bool var_9 = (_Bool)0;
short var_15 = (short)24943;
unsigned char var_17 = (unsigned char)243;
int zero = 0;
short var_18 = (short)-15820;
unsigned char var_19 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
