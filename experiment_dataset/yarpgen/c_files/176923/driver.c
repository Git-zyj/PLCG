#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
long long int var_1 = -6623313667709536246LL;
long long int var_6 = -2131285550054347450LL;
signed char var_8 = (signed char)36;
int zero = 0;
unsigned long long int var_10 = 15136399979490656649ULL;
unsigned short var_11 = (unsigned short)26253;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
