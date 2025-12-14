#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)33479;
short var_11 = (short)3075;
unsigned long long int var_14 = 4301459944923691451ULL;
int zero = 0;
short var_16 = (short)17150;
short var_17 = (short)-1222;
short var_18 = (short)30773;
unsigned short var_19 = (unsigned short)27053;
short var_20 = (short)6500;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
