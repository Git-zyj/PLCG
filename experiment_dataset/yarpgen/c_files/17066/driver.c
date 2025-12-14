#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
unsigned int var_11 = 198707521U;
unsigned char var_13 = (unsigned char)134;
int zero = 0;
unsigned long long int var_20 = 16756623250644424030ULL;
short var_21 = (short)25783;
unsigned int var_22 = 726486759U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
