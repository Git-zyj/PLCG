#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -846123247;
unsigned char var_3 = (unsigned char)81;
short var_4 = (short)29697;
signed char var_5 = (signed char)-73;
unsigned int var_6 = 3667570279U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16719648329500881704ULL;
unsigned short var_9 = (unsigned short)38372;
signed char var_10 = (signed char)24;
unsigned long long int var_11 = 15313464143044362378ULL;
int zero = 0;
int var_12 = -2000595607;
int var_13 = -2073884223;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
