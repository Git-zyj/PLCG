#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
short var_4 = (short)15311;
short var_9 = (short)17998;
unsigned short var_16 = (unsigned short)65531;
int var_18 = 1362435118;
int zero = 0;
unsigned int var_20 = 3807158809U;
unsigned long long int var_21 = 15145011933165450014ULL;
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
