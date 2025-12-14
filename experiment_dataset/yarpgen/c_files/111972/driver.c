#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)179;
int var_7 = -1550469133;
short var_10 = (short)28758;
int var_13 = -559232675;
int zero = 0;
int var_19 = -2105641427;
unsigned char var_20 = (unsigned char)114;
signed char var_21 = (signed char)97;
short var_22 = (short)-25902;
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
