#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = -1073651519;
signed char var_9 = (signed char)-35;
signed char var_11 = (signed char)-102;
unsigned int var_13 = 3778502249U;
unsigned int var_17 = 2999300076U;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 2058780617;
signed char var_20 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
