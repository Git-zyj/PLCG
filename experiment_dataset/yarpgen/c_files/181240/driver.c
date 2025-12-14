#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_13 = (unsigned char)27;
long long int var_16 = 9093858684132268434LL;
unsigned short var_17 = (unsigned short)52017;
unsigned int var_18 = 1686179383U;
int zero = 0;
unsigned int var_20 = 2395996745U;
signed char var_21 = (signed char)-59;
void init() {
}

void checksum() {
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
