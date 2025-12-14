#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2116479105;
unsigned int var_6 = 97231109U;
signed char var_9 = (signed char)-89;
unsigned short var_12 = (unsigned short)12982;
int zero = 0;
short var_14 = (short)-18493;
unsigned int var_15 = 3675833849U;
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
