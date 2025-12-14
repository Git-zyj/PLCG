#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-70;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-15167;
int zero = 0;
signed char var_10 = (signed char)40;
long long int var_11 = 8342501709727702399LL;
unsigned char var_12 = (unsigned char)62;
short var_13 = (short)7758;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
