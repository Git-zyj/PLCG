#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)219;
int var_5 = 979554132;
unsigned long long int var_6 = 3747610651979722994ULL;
unsigned short var_7 = (unsigned short)12956;
short var_8 = (short)-3736;
int var_11 = -1519498162;
long long int var_16 = -5154616353507178569LL;
int zero = 0;
signed char var_18 = (signed char)122;
short var_19 = (short)-13590;
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
