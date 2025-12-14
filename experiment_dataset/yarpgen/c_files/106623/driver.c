#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37623;
unsigned short var_1 = (unsigned short)20711;
long long int var_2 = -6875211151428508522LL;
unsigned int var_5 = 3674100129U;
int zero = 0;
unsigned int var_14 = 2391231829U;
int var_15 = 299913757;
unsigned long long int var_16 = 3739532954453691651ULL;
void init() {
}

void checksum() {
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
