#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)77;
unsigned char var_6 = (unsigned char)3;
short var_7 = (short)14647;
short var_8 = (short)-11517;
signed char var_9 = (signed char)-40;
int zero = 0;
long long int var_14 = -4809354363823861638LL;
unsigned char var_15 = (unsigned char)79;
short var_16 = (short)-8126;
unsigned char var_17 = (unsigned char)54;
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
