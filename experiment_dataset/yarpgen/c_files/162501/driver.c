#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11899;
unsigned short var_3 = (unsigned short)37738;
short var_15 = (short)8699;
int zero = 0;
unsigned short var_20 = (unsigned short)34952;
signed char var_21 = (signed char)117;
short var_22 = (short)30426;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
