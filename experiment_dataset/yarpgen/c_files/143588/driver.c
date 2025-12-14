#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
unsigned char var_4 = (unsigned char)78;
signed char var_9 = (signed char)64;
unsigned short var_13 = (unsigned short)34838;
int zero = 0;
int var_15 = -1101656907;
unsigned int var_16 = 252696358U;
void init() {
}

void checksum() {
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
