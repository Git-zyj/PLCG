#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)49982;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-76;
int zero = 0;
unsigned int var_14 = 2672882314U;
short var_15 = (short)-31151;
unsigned long long int var_16 = 11341250529581146530ULL;
int var_17 = -291215435;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
