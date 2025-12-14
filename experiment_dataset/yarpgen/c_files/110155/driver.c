#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
signed char var_6 = (signed char)77;
unsigned short var_8 = (unsigned short)48540;
short var_12 = (short)15831;
int var_13 = -1865922592;
unsigned char var_18 = (unsigned char)42;
int zero = 0;
signed char var_20 = (signed char)19;
int var_21 = -1255162327;
signed char var_22 = (signed char)-102;
void init() {
}

void checksum() {
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
