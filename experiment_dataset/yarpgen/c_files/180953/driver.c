#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1057900821U;
unsigned char var_12 = (unsigned char)2;
unsigned int var_13 = 2198443510U;
signed char var_14 = (signed char)-57;
unsigned char var_19 = (unsigned char)45;
int zero = 0;
unsigned long long int var_20 = 2047026073800716996ULL;
long long int var_21 = -3706516125334135861LL;
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
