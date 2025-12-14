#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_11 = -4096608864089155568LL;
unsigned short var_12 = (unsigned short)35342;
int zero = 0;
unsigned short var_18 = (unsigned short)18202;
long long int var_19 = 4249302102169062289LL;
short var_20 = (short)29205;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
