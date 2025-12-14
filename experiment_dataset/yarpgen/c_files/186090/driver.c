#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4183364957797144752LL;
long long int var_5 = 1740558516031037352LL;
long long int var_7 = 8949814192287119668LL;
unsigned long long int var_9 = 9693702963111884960ULL;
long long int var_10 = 4881083208546166375LL;
unsigned char var_11 = (unsigned char)86;
short var_12 = (short)-6399;
long long int var_14 = 1188264331574160943LL;
int zero = 0;
long long int var_15 = 3163712299488269497LL;
unsigned int var_16 = 3883485567U;
long long int var_17 = 9045228671994463488LL;
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
