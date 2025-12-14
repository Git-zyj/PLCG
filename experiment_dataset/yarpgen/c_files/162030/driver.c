#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2487299804012492562LL;
unsigned char var_6 = (unsigned char)56;
long long int var_8 = 46990530121571295LL;
short var_11 = (short)-12536;
short var_14 = (short)-28641;
int zero = 0;
unsigned char var_20 = (unsigned char)173;
unsigned int var_21 = 2267202467U;
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
