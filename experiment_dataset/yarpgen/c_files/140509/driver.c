#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 6555742727093575085ULL;
unsigned short var_6 = (unsigned short)29508;
unsigned long long int var_7 = 8188832629508643066ULL;
unsigned short var_14 = (unsigned short)13290;
long long int var_17 = 1508962652568718063LL;
int zero = 0;
short var_19 = (short)-25630;
unsigned int var_20 = 2507246700U;
unsigned char var_21 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
