#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28379;
unsigned short var_5 = (unsigned short)1644;
long long int var_6 = 6621997309689227714LL;
short var_15 = (short)-18094;
int zero = 0;
signed char var_18 = (signed char)-123;
int var_19 = -1231101494;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
