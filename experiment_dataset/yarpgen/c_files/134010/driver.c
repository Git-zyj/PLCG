#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_9 = (short)32505;
unsigned short var_12 = (unsigned short)52611;
unsigned short var_13 = (unsigned short)65272;
long long int var_15 = 9107096616905670657LL;
int zero = 0;
int var_16 = -801153844;
long long int var_17 = 1591179097339772573LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
