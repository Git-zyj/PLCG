#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)199;
_Bool var_8 = (_Bool)0;
int var_9 = 478610995;
int var_12 = 229214822;
short var_14 = (short)-9260;
int var_15 = 33036044;
int zero = 0;
unsigned long long int var_17 = 1846480416297720970ULL;
long long int var_18 = 7327328253916414854LL;
short var_19 = (short)3785;
short var_20 = (short)-19342;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
