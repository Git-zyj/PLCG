#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)127;
int var_9 = 1858208899;
short var_15 = (short)15843;
unsigned char var_16 = (unsigned char)222;
int zero = 0;
short var_19 = (short)-20483;
short var_20 = (short)12484;
short var_21 = (short)-8002;
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
