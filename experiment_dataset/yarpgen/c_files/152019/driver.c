#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4641;
unsigned short var_6 = (unsigned short)27841;
long long int var_10 = -2011736420388146702LL;
int zero = 0;
unsigned short var_11 = (unsigned short)15703;
unsigned short var_12 = (unsigned short)700;
signed char var_13 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
