#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44455;
unsigned short var_3 = (unsigned short)59599;
long long int var_7 = -6829974076647289716LL;
int zero = 0;
unsigned short var_12 = (unsigned short)47831;
unsigned short var_13 = (unsigned short)45592;
short var_14 = (short)2288;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
