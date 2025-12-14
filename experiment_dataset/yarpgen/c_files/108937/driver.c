#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2039544750U;
signed char var_3 = (signed char)57;
int var_4 = 1946210658;
unsigned char var_7 = (unsigned char)243;
unsigned char var_10 = (unsigned char)96;
int var_11 = 272997331;
int zero = 0;
unsigned short var_12 = (unsigned short)50530;
signed char var_13 = (signed char)-117;
short var_14 = (short)32001;
long long int var_15 = -1459570507635822801LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
