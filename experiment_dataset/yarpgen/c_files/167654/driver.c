#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-125;
short var_4 = (short)32359;
unsigned int var_5 = 2436245616U;
int var_10 = 314346265;
unsigned int var_17 = 601111659U;
int zero = 0;
signed char var_19 = (signed char)47;
unsigned long long int var_20 = 17670450578661644478ULL;
void init() {
}

void checksum() {
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
