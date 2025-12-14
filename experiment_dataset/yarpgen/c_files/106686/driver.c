#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)88;
short var_8 = (short)15711;
short var_10 = (short)-16113;
long long int var_17 = -7597483183247839244LL;
unsigned short var_18 = (unsigned short)19542;
int zero = 0;
unsigned short var_20 = (unsigned short)33366;
unsigned int var_21 = 2688158132U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
