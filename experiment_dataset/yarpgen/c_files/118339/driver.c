#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4636394170507826982ULL;
signed char var_7 = (signed char)100;
unsigned int var_9 = 3667314686U;
unsigned int var_10 = 2233363028U;
unsigned char var_15 = (unsigned char)245;
int zero = 0;
signed char var_19 = (signed char)87;
unsigned char var_20 = (unsigned char)7;
unsigned short var_21 = (unsigned short)19285;
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
