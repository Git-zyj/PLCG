#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7221151612581930395LL;
unsigned short var_1 = (unsigned short)40790;
int var_2 = -958681905;
int var_5 = -1533411341;
unsigned long long int var_6 = 3152284102751629990ULL;
unsigned long long int var_8 = 4054170681437916517ULL;
signed char var_11 = (signed char)-113;
int zero = 0;
signed char var_12 = (signed char)102;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)42;
signed char var_15 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
