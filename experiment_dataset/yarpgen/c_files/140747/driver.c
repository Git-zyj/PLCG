#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)22955;
unsigned short var_7 = (unsigned short)40813;
unsigned short var_12 = (unsigned short)57162;
int zero = 0;
unsigned short var_17 = (unsigned short)44763;
short var_18 = (short)1805;
unsigned short var_19 = (unsigned short)40523;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
