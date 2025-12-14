#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1866730418;
unsigned char var_8 = (unsigned char)42;
signed char var_15 = (signed char)126;
long long int var_18 = 652905104453056213LL;
int zero = 0;
unsigned int var_19 = 2690874555U;
unsigned char var_20 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
