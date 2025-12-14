#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)22935;
signed char var_13 = (signed char)107;
unsigned short var_14 = (unsigned short)19629;
int zero = 0;
long long int var_16 = 6367728416876963076LL;
unsigned char var_17 = (unsigned char)253;
signed char var_18 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
