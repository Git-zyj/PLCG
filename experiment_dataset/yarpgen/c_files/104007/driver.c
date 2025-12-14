#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3072;
short var_5 = (short)-7753;
int var_11 = 700998515;
int zero = 0;
long long int var_12 = -9049821717480434080LL;
short var_13 = (short)-8865;
unsigned char var_14 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
