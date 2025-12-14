#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_9 = (short)15922;
short var_10 = (short)-15051;
unsigned long long int var_12 = 11323879706109652037ULL;
unsigned int var_13 = 3243116332U;
unsigned long long int var_14 = 16124140698292974628ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)124;
unsigned int var_16 = 2074230460U;
unsigned long long int var_17 = 3161978965236638572ULL;
void init() {
}

void checksum() {
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
