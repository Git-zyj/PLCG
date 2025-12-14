#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43836;
short var_1 = (short)-12620;
unsigned int var_3 = 1257152095U;
int var_4 = -285760937;
unsigned long long int var_9 = 9526355579889814082ULL;
int zero = 0;
unsigned int var_11 = 3978791927U;
long long int var_12 = -8396887539815937989LL;
unsigned char var_13 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
