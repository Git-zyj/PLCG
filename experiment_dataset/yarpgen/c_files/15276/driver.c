#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
unsigned long long int var_2 = 14077172988272025214ULL;
unsigned char var_8 = (unsigned char)124;
short var_10 = (short)-7789;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 5922388841225963677LL;
unsigned short var_14 = (unsigned short)30150;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
