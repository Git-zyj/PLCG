#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5486167391934877905LL;
unsigned int var_3 = 3574446836U;
int var_6 = 2080335620;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 9791906314898794488ULL;
short var_12 = (short)19005;
long long int var_13 = -228718440715948440LL;
unsigned short var_14 = (unsigned short)58658;
short var_17 = (short)-18373;
int var_19 = -286456679;
int zero = 0;
signed char var_20 = (signed char)-24;
unsigned short var_21 = (unsigned short)6007;
unsigned short var_22 = (unsigned short)33683;
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
