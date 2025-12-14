#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 899110712U;
int var_4 = -1453239010;
unsigned int var_6 = 464932955U;
_Bool var_8 = (_Bool)0;
long long int var_11 = -3337307177754956120LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1737356874U;
unsigned short var_16 = (unsigned short)10862;
int var_17 = -1482928634;
unsigned char var_18 = (unsigned char)37;
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
