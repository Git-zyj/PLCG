#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1879561106197296817LL;
unsigned int var_2 = 1517252077U;
int var_3 = -1919149398;
unsigned long long int var_12 = 756447886714082222ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)42;
short var_16 = (short)-12685;
void init() {
}

void checksum() {
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
