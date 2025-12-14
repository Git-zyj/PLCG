#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned long long int var_1 = 13111076014758146142ULL;
unsigned short var_3 = (unsigned short)32747;
short var_9 = (short)-11156;
unsigned int var_13 = 3577921401U;
int zero = 0;
unsigned short var_17 = (unsigned short)59422;
unsigned char var_18 = (unsigned char)60;
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
