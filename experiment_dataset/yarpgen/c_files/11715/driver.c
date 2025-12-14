#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13497815685997125193ULL;
unsigned long long int var_1 = 9142425434843736642ULL;
unsigned int var_2 = 3519128087U;
unsigned long long int var_4 = 12046741814138409037ULL;
unsigned long long int var_6 = 10348996456534888505ULL;
long long int var_7 = 1144688286745387945LL;
unsigned char var_11 = (unsigned char)206;
int zero = 0;
unsigned int var_12 = 268799055U;
unsigned char var_13 = (unsigned char)205;
unsigned char var_14 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
