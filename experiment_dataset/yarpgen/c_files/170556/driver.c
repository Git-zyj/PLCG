#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4291842996U;
unsigned int var_7 = 2924469965U;
unsigned int var_9 = 3416755811U;
unsigned int var_12 = 3455676628U;
unsigned int var_14 = 3669850124U;
int zero = 0;
unsigned int var_15 = 4064672297U;
unsigned int var_16 = 3652025587U;
void init() {
}

void checksum() {
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
