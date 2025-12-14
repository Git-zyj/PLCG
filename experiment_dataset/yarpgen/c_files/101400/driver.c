#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15472;
_Bool var_4 = (_Bool)1;
short var_7 = (short)18953;
signed char var_12 = (signed char)-38;
int zero = 0;
unsigned int var_13 = 722026906U;
unsigned int var_14 = 55712663U;
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
