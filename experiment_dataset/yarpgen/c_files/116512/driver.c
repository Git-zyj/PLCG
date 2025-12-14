#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5771;
int var_3 = 578821462;
short var_5 = (short)23263;
unsigned short var_8 = (unsigned short)41861;
unsigned long long int var_11 = 15454387193027376897ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)39673;
short var_16 = (short)-23430;
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
