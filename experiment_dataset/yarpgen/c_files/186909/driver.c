#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20356;
unsigned short var_1 = (unsigned short)5701;
unsigned short var_2 = (unsigned short)23513;
unsigned short var_7 = (unsigned short)55523;
signed char var_8 = (signed char)19;
signed char var_9 = (signed char)-123;
short var_10 = (short)32575;
long long int var_12 = 3236138758046689591LL;
signed char var_13 = (signed char)-26;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 1446888655085264523LL;
signed char var_16 = (signed char)-42;
short var_17 = (short)18724;
unsigned short var_18 = (unsigned short)14387;
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
