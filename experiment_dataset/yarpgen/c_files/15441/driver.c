#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1785934617U;
unsigned short var_5 = (unsigned short)2296;
signed char var_7 = (signed char)-80;
unsigned short var_12 = (unsigned short)44763;
long long int var_13 = -8116883280043066832LL;
int zero = 0;
long long int var_17 = -8608668864515915882LL;
unsigned short var_18 = (unsigned short)4259;
void init() {
}

void checksum() {
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
