#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
signed char var_1 = (signed char)48;
long long int var_3 = 2802162741054931155LL;
long long int var_4 = 6546089042663065363LL;
unsigned char var_5 = (unsigned char)138;
signed char var_7 = (signed char)71;
long long int var_10 = -7268295572145212916LL;
unsigned long long int var_11 = 12323029552700385257ULL;
int zero = 0;
signed char var_15 = (signed char)-59;
unsigned char var_16 = (unsigned char)253;
long long int var_17 = -3347711783956808058LL;
unsigned char var_18 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
