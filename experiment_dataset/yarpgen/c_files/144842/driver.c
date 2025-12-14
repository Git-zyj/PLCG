#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-57;
unsigned long long int var_3 = 7815621441763039566ULL;
unsigned long long int var_5 = 14530423062666980112ULL;
short var_6 = (short)-22988;
signed char var_7 = (signed char)-109;
short var_10 = (short)13714;
int zero = 0;
signed char var_13 = (signed char)19;
int var_14 = -1026833014;
void init() {
}

void checksum() {
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
