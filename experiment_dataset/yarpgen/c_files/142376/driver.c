#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
short var_2 = (short)6895;
int var_3 = -1246813251;
unsigned short var_7 = (unsigned short)12185;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 13318750117075513288ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)51537;
unsigned long long int var_15 = 9039551129583450569ULL;
void init() {
}

void checksum() {
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
