#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
short var_3 = (short)-28597;
unsigned int var_4 = 1220781577U;
unsigned char var_11 = (unsigned char)186;
short var_13 = (short)24735;
int zero = 0;
long long int var_18 = 8294664551785937961LL;
unsigned short var_19 = (unsigned short)6146;
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
