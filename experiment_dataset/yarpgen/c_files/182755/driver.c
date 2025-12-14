#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8883042034832014463LL;
int var_1 = 1695762378;
long long int var_3 = 3553928290829720634LL;
long long int var_5 = 8413531512119558902LL;
int zero = 0;
short var_11 = (short)2521;
short var_12 = (short)-31543;
int var_13 = -1531070796;
unsigned char var_14 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
