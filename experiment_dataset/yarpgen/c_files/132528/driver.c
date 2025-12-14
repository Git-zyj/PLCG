#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11727845213545635679ULL;
int var_6 = -559615911;
int var_10 = -1966650071;
unsigned int var_12 = 2977921307U;
int zero = 0;
int var_13 = -668241612;
unsigned long long int var_14 = 16653719275385180753ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
