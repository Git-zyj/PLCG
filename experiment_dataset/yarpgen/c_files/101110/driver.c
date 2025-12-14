#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7574895990245443993LL;
unsigned int var_5 = 2944384144U;
short var_8 = (short)-31342;
unsigned char var_9 = (unsigned char)125;
_Bool var_11 = (_Bool)0;
signed char var_15 = (signed char)-51;
int zero = 0;
short var_17 = (short)24318;
unsigned char var_18 = (unsigned char)3;
void init() {
}

void checksum() {
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
