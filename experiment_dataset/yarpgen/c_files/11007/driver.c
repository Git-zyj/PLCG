#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17957;
signed char var_14 = (signed char)-64;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 4992733550356709642ULL;
long long int var_17 = 5425949497994714303LL;
void init() {
}

void checksum() {
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
