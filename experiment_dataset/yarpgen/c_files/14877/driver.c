#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -1196271242834789894LL;
long long int var_10 = 142921602048755360LL;
int zero = 0;
unsigned int var_14 = 3964069426U;
int var_15 = -1491275430;
unsigned int var_16 = 2772856168U;
int var_17 = -1511037186;
void init() {
}

void checksum() {
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
