#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
int var_5 = -1787573453;
int var_12 = -780733015;
int var_13 = 1466380172;
int zero = 0;
unsigned short var_14 = (unsigned short)53231;
short var_15 = (short)-9257;
long long int var_16 = 8075088732119265702LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
