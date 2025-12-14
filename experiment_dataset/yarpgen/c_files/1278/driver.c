#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26288;
int var_5 = 2070481416;
unsigned char var_9 = (unsigned char)162;
unsigned long long int var_12 = 14109394934893397941ULL;
short var_14 = (short)-14763;
unsigned int var_15 = 3664506423U;
int zero = 0;
short var_16 = (short)734;
unsigned int var_17 = 3784935103U;
unsigned long long int var_18 = 1147739818299265395ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
