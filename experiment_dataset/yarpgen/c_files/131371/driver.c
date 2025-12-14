#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)200;
unsigned long long int var_4 = 4453224636421274318ULL;
unsigned int var_7 = 164324343U;
short var_8 = (short)20365;
int zero = 0;
unsigned short var_10 = (unsigned short)9386;
unsigned int var_11 = 279078267U;
unsigned long long int var_12 = 8411849241673312940ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
