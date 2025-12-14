#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
signed char var_4 = (signed char)-30;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)48;
signed char var_13 = (signed char)20;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 585666079U;
unsigned long long int var_17 = 1427937443530122197ULL;
unsigned long long int var_18 = 16549372079642450521ULL;
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
