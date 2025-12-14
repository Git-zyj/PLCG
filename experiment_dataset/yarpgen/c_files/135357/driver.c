#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-470;
unsigned int var_3 = 1207631941U;
signed char var_4 = (signed char)22;
unsigned int var_5 = 4130152941U;
unsigned char var_6 = (unsigned char)61;
signed char var_10 = (signed char)-52;
int zero = 0;
unsigned char var_11 = (unsigned char)221;
unsigned short var_12 = (unsigned short)37858;
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
