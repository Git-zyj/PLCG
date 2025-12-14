#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)32;
short var_8 = (short)-8480;
unsigned short var_9 = (unsigned short)31081;
signed char var_13 = (signed char)-124;
unsigned int var_19 = 2176220271U;
int zero = 0;
unsigned int var_20 = 2535301561U;
unsigned short var_21 = (unsigned short)60553;
void init() {
}

void checksum() {
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
