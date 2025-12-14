#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3304256764044785638LL;
short var_11 = (short)26662;
unsigned short var_12 = (unsigned short)27423;
unsigned int var_15 = 3516981134U;
unsigned char var_16 = (unsigned char)186;
unsigned char var_18 = (unsigned char)21;
int zero = 0;
long long int var_20 = -134579821083921867LL;
unsigned char var_21 = (unsigned char)35;
signed char var_22 = (signed char)50;
unsigned long long int var_23 = 3269105760814928664ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
