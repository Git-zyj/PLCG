#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)2387;
long long int var_7 = -5281108904265295185LL;
unsigned short var_9 = (unsigned short)23421;
short var_13 = (short)-15869;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-35;
long long int var_21 = 7506506371559412058LL;
long long int var_22 = -665376056167060557LL;
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
