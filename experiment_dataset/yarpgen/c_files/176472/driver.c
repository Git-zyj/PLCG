#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)167;
short var_8 = (short)4017;
int var_10 = 2078590901;
unsigned int var_11 = 191463196U;
short var_13 = (short)-15881;
unsigned char var_17 = (unsigned char)216;
int zero = 0;
unsigned char var_19 = (unsigned char)0;
short var_20 = (short)23096;
signed char var_21 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
