#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7937;
short var_6 = (short)-4406;
long long int var_7 = -6433705786730499789LL;
short var_8 = (short)21490;
short var_9 = (short)-30631;
int zero = 0;
int var_11 = -91902838;
unsigned short var_12 = (unsigned short)24634;
unsigned short var_13 = (unsigned short)26654;
unsigned short var_14 = (unsigned short)48337;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
