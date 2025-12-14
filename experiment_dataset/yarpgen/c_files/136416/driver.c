#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)3903;
short var_7 = (short)14191;
short var_11 = (short)-31267;
int zero = 0;
short var_13 = (short)3155;
long long int var_14 = 5056119363012970541LL;
unsigned short var_15 = (unsigned short)8539;
void init() {
}

void checksum() {
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
