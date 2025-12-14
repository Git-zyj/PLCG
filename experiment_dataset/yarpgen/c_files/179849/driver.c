#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8264272705245876091LL;
unsigned int var_2 = 2087318192U;
short var_5 = (short)-22414;
short var_7 = (short)-5405;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)23;
short var_12 = (short)1834;
short var_13 = (short)10202;
void init() {
}

void checksum() {
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
