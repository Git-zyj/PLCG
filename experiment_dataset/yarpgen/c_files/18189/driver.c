#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 2946200328448478951LL;
unsigned short var_17 = (unsigned short)31751;
int zero = 0;
long long int var_20 = 2973688024247245534LL;
unsigned char var_21 = (unsigned char)177;
short var_22 = (short)-32714;
unsigned int var_23 = 762707671U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
