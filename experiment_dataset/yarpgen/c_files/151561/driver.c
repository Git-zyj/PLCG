#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
int var_3 = -549647627;
unsigned char var_4 = (unsigned char)32;
long long int var_6 = -437739354259532404LL;
int var_8 = 259112011;
int zero = 0;
long long int var_10 = 1987243040714550922LL;
unsigned int var_11 = 4180676283U;
unsigned char var_12 = (unsigned char)215;
long long int var_13 = 8369144371755418868LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
