#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4157800881U;
short var_6 = (short)13166;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3831339000U;
unsigned short var_9 = (unsigned short)22792;
unsigned int var_10 = 1577486424U;
int zero = 0;
unsigned int var_11 = 2877823955U;
unsigned int var_12 = 1900979296U;
unsigned int var_13 = 2672216884U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
