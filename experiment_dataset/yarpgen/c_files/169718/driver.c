#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)34;
long long int var_3 = 7583262535671681343LL;
unsigned short var_10 = (unsigned short)42158;
int zero = 0;
signed char var_12 = (signed char)43;
int var_13 = -1015283077;
unsigned long long int var_14 = 17180297483499667799ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
