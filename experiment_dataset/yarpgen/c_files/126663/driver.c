#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-8;
unsigned int var_6 = 3580456284U;
unsigned short var_8 = (unsigned short)37654;
unsigned int var_11 = 2618326475U;
int zero = 0;
unsigned char var_12 = (unsigned char)56;
unsigned char var_13 = (unsigned char)158;
void init() {
}

void checksum() {
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
