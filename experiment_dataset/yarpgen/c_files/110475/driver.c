#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 1777126031026452716ULL;
unsigned long long int var_6 = 6926709698838976655ULL;
unsigned short var_9 = (unsigned short)18294;
int var_13 = 498357426;
unsigned char var_15 = (unsigned char)125;
int zero = 0;
unsigned short var_16 = (unsigned short)15409;
long long int var_17 = -365194011155824160LL;
signed char var_18 = (signed char)-74;
unsigned long long int var_19 = 12652432778327423760ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
