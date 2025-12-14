#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17623025913311493507ULL;
signed char var_1 = (signed char)45;
unsigned char var_7 = (unsigned char)119;
signed char var_8 = (signed char)-1;
int var_12 = -1016435992;
int zero = 0;
unsigned int var_15 = 294467649U;
unsigned char var_16 = (unsigned char)141;
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
