#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9088146003593364370LL;
int var_5 = 1376610715;
unsigned char var_10 = (unsigned char)227;
int zero = 0;
int var_11 = 755739568;
long long int var_12 = -1544312427637589704LL;
unsigned char var_13 = (unsigned char)16;
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
