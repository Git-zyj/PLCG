#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
unsigned int var_2 = 738709464U;
long long int var_3 = -6170495846463204107LL;
unsigned char var_10 = (unsigned char)205;
int zero = 0;
signed char var_17 = (signed char)-100;
unsigned short var_18 = (unsigned short)28848;
unsigned char var_19 = (unsigned char)100;
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
