#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4464047588454944904LL;
unsigned char var_9 = (unsigned char)90;
short var_12 = (short)8431;
long long int var_14 = 4467997688060049238LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 2048671802;
unsigned char var_18 = (unsigned char)240;
void init() {
}

void checksum() {
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
