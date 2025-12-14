#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28808;
unsigned char var_3 = (unsigned char)24;
unsigned int var_6 = 2145964582U;
unsigned char var_14 = (unsigned char)65;
unsigned int var_18 = 673682919U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3760777392U;
long long int var_21 = 5416224246255344984LL;
unsigned char var_22 = (unsigned char)23;
void init() {
}

void checksum() {
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
