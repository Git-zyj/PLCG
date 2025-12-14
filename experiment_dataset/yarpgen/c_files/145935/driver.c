#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3208243732834512138LL;
int var_7 = -1084498280;
int var_13 = -2071002855;
int zero = 0;
unsigned short var_14 = (unsigned short)16983;
unsigned short var_15 = (unsigned short)60699;
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
