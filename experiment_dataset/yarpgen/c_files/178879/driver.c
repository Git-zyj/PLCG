#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7030568149478332902ULL;
unsigned int var_3 = 2999131753U;
unsigned long long int var_8 = 18260230132570851283ULL;
unsigned short var_10 = (unsigned short)9640;
signed char var_12 = (signed char)111;
int zero = 0;
unsigned long long int var_17 = 1239415757108937002ULL;
unsigned int var_18 = 3903265997U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
