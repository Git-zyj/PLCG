#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 866686982U;
unsigned short var_4 = (unsigned short)26803;
unsigned long long int var_5 = 3489572002435811110ULL;
short var_7 = (short)22021;
short var_9 = (short)4390;
long long int var_11 = -5781660280108529376LL;
int zero = 0;
int var_13 = 1125009788;
unsigned short var_14 = (unsigned short)5642;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
