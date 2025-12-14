#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20130;
short var_8 = (short)-31791;
signed char var_13 = (signed char)-61;
signed char var_14 = (signed char)-117;
short var_15 = (short)6261;
int zero = 0;
unsigned char var_18 = (unsigned char)167;
signed char var_19 = (signed char)123;
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
