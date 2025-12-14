#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13574574251445603056ULL;
unsigned int var_6 = 391264577U;
long long int var_7 = -2296350999560066127LL;
unsigned short var_9 = (unsigned short)21224;
int zero = 0;
unsigned short var_11 = (unsigned short)54671;
int var_12 = -722878304;
int var_13 = 367994277;
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
