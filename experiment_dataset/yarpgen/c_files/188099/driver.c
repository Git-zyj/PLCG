#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31092;
unsigned short var_6 = (unsigned short)390;
unsigned short var_7 = (unsigned short)11980;
short var_10 = (short)30622;
int zero = 0;
int var_12 = 625340451;
unsigned int var_13 = 1305177126U;
void init() {
}

void checksum() {
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
