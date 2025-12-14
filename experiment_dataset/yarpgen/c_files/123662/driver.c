#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
long long int var_2 = -6667509265339743690LL;
unsigned long long int var_3 = 9996745772380693148ULL;
short var_9 = (short)-2355;
unsigned char var_10 = (unsigned char)132;
unsigned int var_13 = 2149876577U;
int zero = 0;
unsigned char var_14 = (unsigned char)187;
unsigned char var_15 = (unsigned char)25;
signed char var_16 = (signed char)58;
unsigned long long int var_17 = 7622552526860526476ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
