#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)134;
long long int var_8 = -8879943816313004013LL;
unsigned char var_9 = (unsigned char)213;
signed char var_14 = (signed char)-84;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 1456298680;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
