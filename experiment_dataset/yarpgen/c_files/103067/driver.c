#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 766457450700968261LL;
short var_11 = (short)-10828;
short var_12 = (short)16647;
unsigned long long int var_15 = 11344520091989302328ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)38519;
signed char var_17 = (signed char)-127;
unsigned char var_18 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
