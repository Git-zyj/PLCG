#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7330;
short var_1 = (short)-4158;
int var_2 = 837316912;
unsigned int var_8 = 2211398412U;
short var_13 = (short)-24205;
int zero = 0;
int var_20 = 1390528031;
unsigned char var_21 = (unsigned char)209;
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
