#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
int var_1 = -1128853482;
int var_8 = -1676371465;
int var_9 = -211484399;
signed char var_12 = (signed char)-61;
int var_14 = 2060051863;
int zero = 0;
short var_15 = (short)15491;
signed char var_16 = (signed char)(-127 - 1);
_Bool var_17 = (_Bool)0;
int var_18 = 360868336;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
