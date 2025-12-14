#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-50;
short var_5 = (short)28158;
long long int var_12 = 6239303873527145651LL;
signed char var_13 = (signed char)59;
int zero = 0;
long long int var_14 = 4319659696942024214LL;
short var_15 = (short)11815;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
