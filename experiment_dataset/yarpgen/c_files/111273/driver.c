#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
signed char var_2 = (signed char)-68;
long long int var_3 = -3255235112706821692LL;
int var_6 = 136689341;
long long int var_9 = -2964892018911559481LL;
unsigned short var_10 = (unsigned short)42267;
long long int var_12 = -6353656134264941788LL;
int zero = 0;
unsigned int var_13 = 874341942U;
unsigned short var_14 = (unsigned short)46303;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
