#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13622351340937187295ULL;
signed char var_6 = (signed char)-90;
long long int var_14 = -4301794829771995031LL;
int zero = 0;
unsigned short var_16 = (unsigned short)59053;
unsigned char var_17 = (unsigned char)232;
unsigned long long int var_18 = 13109093066415388111ULL;
long long int var_19 = 340876007747204918LL;
short var_20 = (short)4904;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
