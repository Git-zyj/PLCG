#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1300785609U;
unsigned int var_4 = 3504957588U;
signed char var_15 = (signed char)-47;
int zero = 0;
unsigned char var_16 = (unsigned char)255;
unsigned int var_17 = 4272513470U;
short var_18 = (short)-6863;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
