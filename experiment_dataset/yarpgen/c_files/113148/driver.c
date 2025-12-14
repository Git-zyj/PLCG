#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)17047;
unsigned long long int var_13 = 2767887127965575880ULL;
int zero = 0;
long long int var_14 = 6489331792924747307LL;
unsigned short var_15 = (unsigned short)24010;
unsigned char var_16 = (unsigned char)254;
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
