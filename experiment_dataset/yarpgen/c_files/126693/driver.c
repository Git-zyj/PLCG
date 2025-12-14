#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 90051447;
short var_9 = (short)14733;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1429871424U;
unsigned int var_15 = 3247437965U;
signed char var_17 = (signed char)107;
int zero = 0;
int var_20 = 1475988314;
signed char var_21 = (signed char)-48;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
