#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 253023882;
short var_2 = (short)26279;
long long int var_10 = 833637865320893705LL;
int var_13 = -9846928;
unsigned char var_16 = (unsigned char)182;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)56434;
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
