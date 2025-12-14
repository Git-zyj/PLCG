#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_6 = -9202164826400681965LL;
unsigned int var_11 = 745926268U;
int var_12 = -2045646058;
long long int var_13 = -5806471821300240017LL;
int zero = 0;
short var_14 = (short)3577;
unsigned short var_15 = (unsigned short)56428;
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
