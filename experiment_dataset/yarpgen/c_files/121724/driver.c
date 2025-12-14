#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 984816262541506789LL;
int var_5 = -2141240913;
signed char var_7 = (signed char)126;
int zero = 0;
unsigned char var_13 = (unsigned char)168;
signed char var_14 = (signed char)44;
signed char var_15 = (signed char)69;
void init() {
}

void checksum() {
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
