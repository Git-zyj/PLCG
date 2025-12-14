#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)169;
unsigned short var_5 = (unsigned short)18669;
unsigned char var_15 = (unsigned char)222;
short var_16 = (short)-4824;
int zero = 0;
unsigned int var_17 = 2217759683U;
unsigned int var_18 = 3305150312U;
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
