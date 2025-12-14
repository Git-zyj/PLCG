#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10634;
unsigned short var_1 = (unsigned short)57681;
int var_2 = 806159138;
signed char var_5 = (signed char)12;
unsigned short var_6 = (unsigned short)55145;
int zero = 0;
long long int var_14 = 5976107748383981440LL;
unsigned int var_15 = 421664077U;
void init() {
}

void checksum() {
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
