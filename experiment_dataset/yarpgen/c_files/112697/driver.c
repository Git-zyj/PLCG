#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 99009968U;
signed char var_4 = (signed char)83;
signed char var_6 = (signed char)84;
unsigned short var_10 = (unsigned short)29868;
unsigned int var_14 = 2451885669U;
int zero = 0;
long long int var_16 = -7804240864360022676LL;
short var_17 = (short)31500;
long long int var_18 = -3047169408293395921LL;
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
