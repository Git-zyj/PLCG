#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
unsigned char var_1 = (unsigned char)225;
unsigned char var_5 = (unsigned char)76;
unsigned char var_6 = (unsigned char)17;
short var_7 = (short)-29329;
signed char var_8 = (signed char)102;
unsigned char var_10 = (unsigned char)96;
signed char var_11 = (signed char)-62;
unsigned char var_13 = (unsigned char)232;
int zero = 0;
short var_14 = (short)17432;
unsigned int var_15 = 90274847U;
short var_16 = (short)-24951;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
