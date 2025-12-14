#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2446633086689279905LL;
unsigned char var_7 = (unsigned char)178;
unsigned long long int var_8 = 9069856432808086551ULL;
unsigned long long int var_11 = 18185084583373026032ULL;
unsigned char var_14 = (unsigned char)57;
int zero = 0;
unsigned int var_18 = 792125440U;
unsigned int var_19 = 243897260U;
short var_20 = (short)-20094;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
