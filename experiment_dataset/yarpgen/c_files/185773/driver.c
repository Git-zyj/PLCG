#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-49;
unsigned char var_7 = (unsigned char)217;
short var_10 = (short)5020;
int zero = 0;
long long int var_14 = 3799244227409601159LL;
unsigned char var_15 = (unsigned char)232;
signed char var_16 = (signed char)91;
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
