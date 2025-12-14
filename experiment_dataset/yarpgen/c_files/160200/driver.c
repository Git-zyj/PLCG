#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)210;
unsigned int var_7 = 1234342386U;
int var_8 = 187433115;
unsigned int var_10 = 1640856022U;
int zero = 0;
unsigned char var_14 = (unsigned char)75;
long long int var_15 = -8595930035669569330LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
