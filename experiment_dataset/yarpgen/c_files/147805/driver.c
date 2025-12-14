#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1949925349U;
_Bool var_1 = (_Bool)1;
signed char var_6 = (signed char)-112;
signed char var_7 = (signed char)34;
unsigned int var_9 = 3745097329U;
int zero = 0;
short var_13 = (short)-5674;
short var_14 = (short)-21710;
short var_15 = (short)27388;
unsigned short var_16 = (unsigned short)30000;
void init() {
}

void checksum() {
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
