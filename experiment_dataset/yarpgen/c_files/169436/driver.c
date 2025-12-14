#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3378622153U;
short var_4 = (short)642;
unsigned long long int var_6 = 4631315250364759775ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)1;
short var_14 = (short)566;
unsigned short var_15 = (unsigned short)7585;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
