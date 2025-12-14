#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -924003830;
unsigned short var_11 = (unsigned short)63160;
signed char var_14 = (signed char)56;
int zero = 0;
unsigned long long int var_18 = 5987115317650319511ULL;
unsigned char var_19 = (unsigned char)112;
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
