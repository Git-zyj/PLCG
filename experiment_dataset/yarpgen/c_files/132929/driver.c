#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1169725391;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 4887652361024953021LL;
unsigned char var_22 = (unsigned char)150;
int var_23 = -1372519961;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
