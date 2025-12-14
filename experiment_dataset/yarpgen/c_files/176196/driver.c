#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -595163277;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)10003;
unsigned short var_3 = (unsigned short)38463;
short var_4 = (short)-524;
int var_6 = -975319918;
short var_7 = (short)2491;
unsigned char var_8 = (unsigned char)222;
short var_10 = (short)18025;
unsigned int var_12 = 63461557U;
int zero = 0;
unsigned short var_13 = (unsigned short)5711;
long long int var_14 = -5341718222700366784LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
