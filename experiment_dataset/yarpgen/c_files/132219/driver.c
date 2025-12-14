#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
unsigned char var_1 = (unsigned char)115;
signed char var_3 = (signed char)-87;
unsigned char var_8 = (unsigned char)118;
signed char var_14 = (signed char)119;
signed char var_16 = (signed char)3;
int zero = 0;
unsigned char var_18 = (unsigned char)250;
unsigned char var_19 = (unsigned char)107;
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
