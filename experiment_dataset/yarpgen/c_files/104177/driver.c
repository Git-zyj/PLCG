#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20341;
int var_3 = 755464948;
int var_4 = 1485451063;
int var_9 = -1051821496;
unsigned long long int var_12 = 4825156612920528239ULL;
int zero = 0;
long long int var_14 = -6424592587845783130LL;
long long int var_15 = -5017187065996421004LL;
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
