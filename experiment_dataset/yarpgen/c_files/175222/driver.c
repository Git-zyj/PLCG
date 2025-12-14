#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22387;
unsigned char var_4 = (unsigned char)9;
unsigned short var_5 = (unsigned short)8406;
int zero = 0;
long long int var_11 = -6355219707151291899LL;
int var_12 = -2097633045;
int var_13 = -36831538;
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
