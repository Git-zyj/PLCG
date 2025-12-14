#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3170887992U;
long long int var_7 = 1298788719519723934LL;
unsigned short var_10 = (unsigned short)34463;
unsigned char var_13 = (unsigned char)176;
unsigned long long int var_14 = 2980494727396321990ULL;
short var_16 = (short)4244;
int zero = 0;
int var_19 = -701994471;
short var_20 = (short)10385;
unsigned long long int var_21 = 15392167511177706922ULL;
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
