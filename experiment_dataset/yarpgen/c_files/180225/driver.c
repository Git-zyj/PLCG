#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -870768516;
unsigned short var_3 = (unsigned short)10624;
_Bool var_6 = (_Bool)1;
long long int var_10 = 6574523084554024692LL;
unsigned char var_13 = (unsigned char)34;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_20 = (short)15533;
short var_21 = (short)-4739;
signed char var_22 = (signed char)65;
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
