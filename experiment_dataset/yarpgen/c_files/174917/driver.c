#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9432784733634591884ULL;
int var_2 = -153299027;
unsigned int var_3 = 3747805280U;
unsigned long long int var_8 = 4513833026596613580ULL;
int zero = 0;
int var_12 = -457071532;
unsigned int var_13 = 802526248U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
