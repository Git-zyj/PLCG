#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
unsigned char var_1 = (unsigned char)42;
signed char var_3 = (signed char)68;
unsigned char var_4 = (unsigned char)179;
int var_5 = 349832830;
unsigned int var_7 = 1606673138U;
unsigned short var_10 = (unsigned short)1543;
int zero = 0;
signed char var_11 = (signed char)-33;
signed char var_12 = (signed char)44;
signed char var_13 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
