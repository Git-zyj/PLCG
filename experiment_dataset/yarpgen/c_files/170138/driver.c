#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned char var_2 = (unsigned char)240;
unsigned int var_4 = 880307337U;
unsigned int var_6 = 478189431U;
unsigned int var_8 = 568189391U;
signed char var_10 = (signed char)124;
signed char var_11 = (signed char)-115;
signed char var_16 = (signed char)114;
int zero = 0;
unsigned int var_17 = 186714158U;
short var_18 = (short)-8116;
void init() {
}

void checksum() {
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
