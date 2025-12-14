#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)68;
unsigned char var_10 = (unsigned char)44;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)55862;
int zero = 0;
unsigned long long int var_18 = 6270867721286528671ULL;
unsigned short var_19 = (unsigned short)45639;
void init() {
}

void checksum() {
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
