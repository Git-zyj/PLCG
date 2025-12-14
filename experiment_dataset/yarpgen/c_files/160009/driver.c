#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12651;
unsigned int var_2 = 2425904373U;
unsigned short var_7 = (unsigned short)19331;
int zero = 0;
unsigned int var_11 = 3983217594U;
unsigned char var_12 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
