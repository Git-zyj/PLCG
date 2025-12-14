#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -112840068;
unsigned short var_3 = (unsigned short)45393;
signed char var_4 = (signed char)-94;
short var_6 = (short)-1161;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 566735350U;
int var_13 = 1443551630;
int zero = 0;
unsigned int var_16 = 1524875146U;
unsigned long long int var_17 = 1607820190476759627ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
