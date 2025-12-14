#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned int var_4 = 3427479699U;
_Bool var_5 = (_Bool)1;
int var_8 = 709900918;
short var_9 = (short)-28521;
int zero = 0;
unsigned int var_12 = 2611044668U;
unsigned int var_13 = 1086769445U;
void init() {
}

void checksum() {
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
