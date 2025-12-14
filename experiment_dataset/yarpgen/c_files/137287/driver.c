#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
short var_1 = (short)15896;
unsigned long long int var_9 = 14528828599917240577ULL;
long long int var_12 = -4728234146706774835LL;
int zero = 0;
unsigned char var_14 = (unsigned char)193;
unsigned int var_15 = 2036021542U;
void init() {
}

void checksum() {
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
