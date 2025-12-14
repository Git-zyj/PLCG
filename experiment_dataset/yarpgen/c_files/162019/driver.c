#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
short var_3 = (short)-15289;
int var_7 = 479565300;
int var_10 = -814166175;
short var_12 = (short)803;
int zero = 0;
unsigned int var_14 = 4227614178U;
int var_15 = -1225173800;
short var_16 = (short)12708;
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
