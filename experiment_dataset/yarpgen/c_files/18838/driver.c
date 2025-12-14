#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7431538404316554418ULL;
unsigned long long int var_4 = 15009577365572334151ULL;
int var_5 = -1984199154;
unsigned long long int var_8 = 17672103412070973352ULL;
int var_10 = 1656704526;
int var_11 = -1499003133;
signed char var_13 = (signed char)-14;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)15638;
short var_16 = (short)-28783;
short var_17 = (short)-26487;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
