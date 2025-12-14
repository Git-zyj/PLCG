#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-28281;
long long int var_11 = -7703151080459983282LL;
int zero = 0;
long long int var_12 = -4422282863261950879LL;
short var_13 = (short)-10629;
unsigned short var_14 = (unsigned short)50623;
long long int var_15 = -7099575126662613752LL;
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
