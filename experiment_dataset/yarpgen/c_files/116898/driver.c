#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)29;
unsigned char var_8 = (unsigned char)253;
int zero = 0;
long long int var_15 = -6927807166673639807LL;
unsigned long long int var_16 = 4962665876199511480ULL;
long long int var_17 = -4179649050664910355LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
