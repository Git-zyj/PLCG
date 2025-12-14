#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)5667;
unsigned int var_8 = 1845057199U;
unsigned short var_9 = (unsigned short)36807;
short var_11 = (short)17924;
int zero = 0;
signed char var_13 = (signed char)-49;
unsigned short var_14 = (unsigned short)57078;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
