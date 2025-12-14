#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-124;
int var_7 = 102477586;
_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)-38;
int zero = 0;
unsigned int var_13 = 289257483U;
unsigned int var_14 = 653511647U;
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
