#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 214189767;
signed char var_3 = (signed char)33;
unsigned short var_5 = (unsigned short)41137;
signed char var_8 = (signed char)109;
signed char var_9 = (signed char)-44;
signed char var_10 = (signed char)-111;
int zero = 0;
short var_11 = (short)-18432;
short var_12 = (short)1824;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
