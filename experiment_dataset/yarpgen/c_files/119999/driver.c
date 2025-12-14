#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15942819197857479472ULL;
unsigned long long int var_13 = 9125353596014156079ULL;
unsigned int var_14 = 1579502102U;
long long int var_16 = 1053973438509860192LL;
int zero = 0;
int var_17 = 1568213272;
int var_18 = -1254973600;
long long int var_19 = 4858973809382205121LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
