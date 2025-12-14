#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 8228309980865498031LL;
signed char var_9 = (signed char)-110;
int var_11 = -1717040613;
int zero = 0;
unsigned int var_12 = 3078052209U;
signed char var_13 = (signed char)74;
unsigned short var_14 = (unsigned short)23429;
unsigned short var_15 = (unsigned short)39007;
short var_16 = (short)22322;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
