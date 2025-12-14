#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1073358745;
short var_2 = (short)-15372;
unsigned short var_5 = (unsigned short)59762;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-118;
signed char var_13 = (signed char)-38;
int zero = 0;
short var_14 = (short)15412;
long long int var_15 = 1223212938724442819LL;
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
