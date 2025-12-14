#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1864637600651956193ULL;
unsigned char var_3 = (unsigned char)61;
unsigned int var_5 = 3701512767U;
unsigned long long int var_8 = 8385074858143534754ULL;
unsigned short var_13 = (unsigned short)3085;
int zero = 0;
unsigned char var_14 = (unsigned char)148;
unsigned long long int var_15 = 3563185812810909711ULL;
unsigned int var_16 = 196354823U;
void init() {
}

void checksum() {
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
