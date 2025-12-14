#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 605175503014774216ULL;
unsigned short var_10 = (unsigned short)5991;
long long int var_13 = -489401021050181399LL;
short var_14 = (short)16010;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -9202743032188479402LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
