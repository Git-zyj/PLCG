#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2469208315865885164LL;
unsigned short var_5 = (unsigned short)40897;
unsigned int var_12 = 1240815441U;
int zero = 0;
short var_17 = (short)11812;
long long int var_18 = 2235094794735767576LL;
void init() {
}

void checksum() {
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
