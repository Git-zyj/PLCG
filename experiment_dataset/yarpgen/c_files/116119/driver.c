#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19509;
short var_2 = (short)10828;
short var_6 = (short)6167;
short var_7 = (short)-26467;
unsigned long long int var_8 = 8345305732726011193ULL;
unsigned long long int var_10 = 10487395887874833287ULL;
int zero = 0;
unsigned long long int var_15 = 73421031605069498ULL;
unsigned long long int var_16 = 6178907609818082166ULL;
short var_17 = (short)-6215;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
