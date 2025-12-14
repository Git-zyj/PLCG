#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16502740812114601352ULL;
int var_3 = -1197238596;
unsigned long long int var_5 = 7367504522372765725ULL;
int zero = 0;
long long int var_16 = -3245432836388816699LL;
int var_17 = 285323837;
unsigned char var_18 = (unsigned char)199;
unsigned int var_19 = 2092629537U;
unsigned int var_20 = 3131435582U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
