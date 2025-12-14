#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 990878149;
unsigned short var_2 = (unsigned short)24061;
int var_4 = -474455533;
int zero = 0;
int var_14 = 1945549409;
unsigned int var_15 = 1390905345U;
unsigned int var_16 = 3559882807U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
