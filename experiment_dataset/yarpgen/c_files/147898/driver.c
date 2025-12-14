#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned char var_2 = (unsigned char)78;
unsigned char var_4 = (unsigned char)27;
unsigned long long int var_5 = 3540682470511222407ULL;
unsigned char var_14 = (unsigned char)95;
unsigned char var_16 = (unsigned char)29;
int zero = 0;
long long int var_18 = 5319224950867140191LL;
short var_19 = (short)-12923;
void init() {
}

void checksum() {
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
