#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)13219;
unsigned int var_7 = 3197136391U;
long long int var_8 = 1285064833109305522LL;
unsigned short var_10 = (unsigned short)51384;
int zero = 0;
int var_18 = -1744837060;
int var_19 = 1511632870;
unsigned int var_20 = 3183245891U;
void init() {
}

void checksum() {
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
