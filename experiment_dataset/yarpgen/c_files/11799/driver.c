#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 607673371;
unsigned short var_1 = (unsigned short)10834;
int var_2 = 288664811;
short var_4 = (short)-26838;
int var_8 = 1851982074;
unsigned short var_16 = (unsigned short)52897;
int zero = 0;
unsigned long long int var_17 = 6519336549049808378ULL;
_Bool var_18 = (_Bool)0;
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
