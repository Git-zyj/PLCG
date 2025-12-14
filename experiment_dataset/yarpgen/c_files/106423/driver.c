#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-16810;
unsigned int var_9 = 3370804782U;
unsigned short var_13 = (unsigned short)55567;
long long int var_15 = 8666675256018341414LL;
int zero = 0;
signed char var_17 = (signed char)83;
unsigned char var_18 = (unsigned char)118;
unsigned char var_19 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
