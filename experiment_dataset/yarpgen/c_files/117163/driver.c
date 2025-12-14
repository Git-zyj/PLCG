#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21523;
signed char var_2 = (signed char)-46;
unsigned char var_3 = (unsigned char)182;
unsigned char var_4 = (unsigned char)155;
unsigned int var_7 = 2865235351U;
unsigned int var_10 = 1691468981U;
unsigned char var_13 = (unsigned char)126;
int zero = 0;
signed char var_16 = (signed char)48;
unsigned char var_17 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
