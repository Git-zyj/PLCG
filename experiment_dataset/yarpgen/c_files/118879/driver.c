#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2272628298U;
unsigned long long int var_2 = 7759747042184838963ULL;
_Bool var_4 = (_Bool)0;
int var_7 = 1306489332;
short var_8 = (short)24354;
unsigned short var_10 = (unsigned short)36874;
signed char var_11 = (signed char)-66;
signed char var_12 = (signed char)-20;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 3219523283559224461ULL;
unsigned long long int var_16 = 18364477813506991446ULL;
unsigned short var_17 = (unsigned short)28339;
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
