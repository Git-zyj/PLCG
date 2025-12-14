#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)19157;
signed char var_13 = (signed char)13;
short var_16 = (short)-28989;
long long int var_17 = -8776773110974225289LL;
int zero = 0;
unsigned long long int var_18 = 18277429459813252901ULL;
short var_19 = (short)-14312;
unsigned short var_20 = (unsigned short)7660;
short var_21 = (short)32251;
unsigned char var_22 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
