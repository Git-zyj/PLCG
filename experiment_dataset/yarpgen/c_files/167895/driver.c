#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5871600053025744290LL;
unsigned short var_2 = (unsigned short)24409;
signed char var_5 = (signed char)81;
unsigned long long int var_7 = 13288675932993600695ULL;
int zero = 0;
short var_10 = (short)25228;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
