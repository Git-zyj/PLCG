#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
long long int var_3 = -4425936958961908520LL;
unsigned long long int var_4 = 16850366258996242705ULL;
unsigned char var_7 = (unsigned char)15;
short var_13 = (short)31231;
int zero = 0;
unsigned char var_14 = (unsigned char)23;
short var_15 = (short)909;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
