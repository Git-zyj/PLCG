#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)156;
short var_6 = (short)-16743;
unsigned char var_7 = (unsigned char)175;
unsigned char var_8 = (unsigned char)103;
unsigned long long int var_9 = 16103857715225790865ULL;
int zero = 0;
short var_11 = (short)18108;
unsigned char var_12 = (unsigned char)87;
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
