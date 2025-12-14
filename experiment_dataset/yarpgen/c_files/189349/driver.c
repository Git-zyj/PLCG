#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-14885;
unsigned int var_12 = 1175838850U;
unsigned short var_14 = (unsigned short)27620;
int zero = 0;
unsigned int var_19 = 1411745914U;
int var_20 = -238790486;
int var_21 = 778249200;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
