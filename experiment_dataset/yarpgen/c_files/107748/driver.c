#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 245801912U;
int var_3 = 725267514;
unsigned int var_11 = 1161403339U;
int var_12 = 418017844;
int zero = 0;
unsigned int var_15 = 2303425554U;
unsigned long long int var_16 = 16390681022360893212ULL;
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
