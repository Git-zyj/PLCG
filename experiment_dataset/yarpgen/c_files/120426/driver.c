#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)11;
long long int var_5 = 2803953501549286192LL;
long long int var_6 = -5097207289005819060LL;
unsigned int var_7 = 4124631168U;
int zero = 0;
signed char var_10 = (signed char)-110;
short var_11 = (short)-31777;
unsigned int var_12 = 3083070538U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
