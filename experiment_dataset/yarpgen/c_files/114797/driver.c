#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2027698327;
unsigned int var_2 = 1682489325U;
unsigned short var_3 = (unsigned short)36722;
unsigned int var_6 = 294184230U;
int var_8 = -918735277;
short var_9 = (short)21852;
signed char var_12 = (signed char)34;
int var_14 = -1186988886;
int zero = 0;
long long int var_16 = 8827707337961157484LL;
int var_17 = -263916004;
int var_18 = 222798018;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
