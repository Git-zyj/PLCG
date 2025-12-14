#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2106293937;
long long int var_5 = 5935176898283930298LL;
int var_8 = -148361129;
int zero = 0;
unsigned short var_17 = (unsigned short)59278;
unsigned char var_18 = (unsigned char)236;
unsigned char var_19 = (unsigned char)111;
unsigned int var_20 = 4150450625U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
