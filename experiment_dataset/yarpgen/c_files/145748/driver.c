#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)107;
unsigned int var_8 = 1496663087U;
unsigned int var_9 = 3018698443U;
unsigned short var_10 = (unsigned short)46077;
unsigned short var_11 = (unsigned short)65400;
int zero = 0;
short var_12 = (short)28023;
int var_13 = 1687156829;
unsigned long long int var_14 = 7451989121518814829ULL;
unsigned short var_15 = (unsigned short)43804;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
