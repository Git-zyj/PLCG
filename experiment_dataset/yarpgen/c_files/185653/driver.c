#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1149048003U;
unsigned long long int var_14 = 38419086832681988ULL;
unsigned char var_15 = (unsigned char)206;
int zero = 0;
unsigned int var_16 = 3652076793U;
short var_17 = (short)-12408;
unsigned char var_18 = (unsigned char)85;
unsigned char var_19 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
