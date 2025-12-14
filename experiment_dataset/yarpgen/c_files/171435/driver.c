#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6988059589944728130LL;
unsigned int var_1 = 1524583624U;
unsigned int var_3 = 4141711528U;
unsigned char var_8 = (unsigned char)233;
signed char var_10 = (signed char)-92;
unsigned char var_11 = (unsigned char)114;
long long int var_13 = -7915690727513028768LL;
int zero = 0;
unsigned char var_20 = (unsigned char)83;
short var_21 = (short)-29543;
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
