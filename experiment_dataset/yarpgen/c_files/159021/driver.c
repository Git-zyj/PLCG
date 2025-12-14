#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_6 = 2127252449;
unsigned short var_10 = (unsigned short)12246;
long long int var_11 = 1105678229996096038LL;
unsigned short var_17 = (unsigned short)4907;
int zero = 0;
unsigned short var_18 = (unsigned short)6672;
short var_19 = (short)-8638;
void init() {
}

void checksum() {
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
