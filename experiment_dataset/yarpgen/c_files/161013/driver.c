#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)55;
long long int var_4 = -7445466087545688728LL;
unsigned short var_11 = (unsigned short)19592;
unsigned short var_12 = (unsigned short)59489;
int var_13 = -471653067;
int zero = 0;
unsigned int var_16 = 3558547118U;
short var_17 = (short)-21257;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
