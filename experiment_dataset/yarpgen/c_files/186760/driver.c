#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22318;
unsigned int var_3 = 4116483200U;
long long int var_4 = 8420506771037917012LL;
long long int var_6 = 1547087316666702005LL;
unsigned short var_7 = (unsigned short)16348;
int zero = 0;
unsigned char var_20 = (unsigned char)238;
unsigned int var_21 = 2430989826U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
