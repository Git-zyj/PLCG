#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1989;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-26358;
signed char var_9 = (signed char)64;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-26999;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1471284755122559226LL;
unsigned short var_18 = (unsigned short)27359;
short var_19 = (short)-15567;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
