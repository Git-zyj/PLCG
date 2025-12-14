#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)64;
long long int var_6 = 590721294226878692LL;
long long int var_7 = -6251852144202962471LL;
long long int var_8 = 2415188898338035677LL;
signed char var_9 = (signed char)8;
signed char var_11 = (signed char)-98;
short var_12 = (short)21364;
int zero = 0;
short var_13 = (short)30811;
short var_14 = (short)-8121;
unsigned int var_15 = 3701977783U;
unsigned int var_16 = 3279359370U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
