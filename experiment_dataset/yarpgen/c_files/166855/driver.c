#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17888612312986838296ULL;
signed char var_3 = (signed char)56;
_Bool var_9 = (_Bool)0;
long long int var_14 = 1475671935892772239LL;
short var_15 = (short)-13957;
int zero = 0;
short var_19 = (short)2046;
signed char var_20 = (signed char)-63;
unsigned short var_21 = (unsigned short)1133;
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
