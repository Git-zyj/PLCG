#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -50503158;
unsigned char var_2 = (unsigned char)170;
unsigned int var_6 = 1362582895U;
int var_10 = -367915723;
int zero = 0;
unsigned short var_13 = (unsigned short)65474;
long long int var_14 = -6466060756786635937LL;
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
