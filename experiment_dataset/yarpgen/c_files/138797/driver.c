#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43162;
unsigned int var_6 = 331221562U;
signed char var_7 = (signed char)-71;
signed char var_8 = (signed char)126;
unsigned short var_9 = (unsigned short)51141;
int var_11 = -1099054163;
unsigned char var_14 = (unsigned char)164;
int zero = 0;
signed char var_16 = (signed char)-22;
unsigned short var_17 = (unsigned short)4725;
unsigned short var_18 = (unsigned short)28;
unsigned int var_19 = 473568552U;
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
