#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
long long int var_6 = -2368717583482288830LL;
short var_10 = (short)-23931;
unsigned int var_11 = 3222596682U;
int zero = 0;
long long int var_16 = -1582547545465844239LL;
long long int var_17 = -8675326068126497251LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
