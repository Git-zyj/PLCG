#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3463276865431255890LL;
unsigned char var_5 = (unsigned char)185;
unsigned char var_6 = (unsigned char)115;
signed char var_13 = (signed char)109;
int zero = 0;
unsigned long long int var_18 = 16726768944482272008ULL;
unsigned char var_19 = (unsigned char)239;
short var_20 = (short)3014;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
