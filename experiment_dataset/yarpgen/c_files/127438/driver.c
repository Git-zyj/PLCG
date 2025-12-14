#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)16;
signed char var_13 = (signed char)-87;
unsigned short var_15 = (unsigned short)58879;
signed char var_18 = (signed char)-62;
int zero = 0;
int var_19 = 2035676754;
signed char var_20 = (signed char)-11;
signed char var_21 = (signed char)96;
unsigned char var_22 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
