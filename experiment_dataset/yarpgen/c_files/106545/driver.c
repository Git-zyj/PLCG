#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7824464360627608692LL;
unsigned char var_8 = (unsigned char)210;
unsigned char var_12 = (unsigned char)157;
int zero = 0;
unsigned short var_13 = (unsigned short)44438;
unsigned short var_14 = (unsigned short)16067;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
