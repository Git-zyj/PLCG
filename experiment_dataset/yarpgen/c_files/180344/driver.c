#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4010016087U;
unsigned long long int var_3 = 6585090893387873284ULL;
int var_8 = -87672891;
unsigned long long int var_10 = 10259413232417534302ULL;
unsigned char var_12 = (unsigned char)79;
int zero = 0;
unsigned char var_13 = (unsigned char)160;
long long int var_14 = 6266220855629517939LL;
long long int var_15 = -73246000750770923LL;
long long int var_16 = 4883644097161268312LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
