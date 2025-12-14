#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7344762747451225705LL;
unsigned int var_2 = 412087299U;
unsigned char var_3 = (unsigned char)5;
signed char var_11 = (signed char)33;
short var_12 = (short)-8722;
unsigned char var_13 = (unsigned char)69;
int zero = 0;
short var_20 = (short)30691;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-125;
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
