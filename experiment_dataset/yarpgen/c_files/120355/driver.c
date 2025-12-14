#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16999954389945270523ULL;
long long int var_3 = 4231942032044520744LL;
long long int var_5 = 1311567452259336401LL;
unsigned short var_7 = (unsigned short)49978;
_Bool var_12 = (_Bool)0;
signed char var_17 = (signed char)37;
int zero = 0;
int var_18 = 632701302;
signed char var_19 = (signed char)-70;
unsigned long long int var_20 = 14456277527104221920ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
