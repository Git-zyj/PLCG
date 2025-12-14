#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7612307874958538428ULL;
unsigned int var_5 = 885125905U;
unsigned long long int var_6 = 3129788523925492520ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)130;
short var_13 = (short)13718;
unsigned long long int var_14 = 14399301064118307206ULL;
int var_15 = 100929744;
unsigned int var_16 = 241000853U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
