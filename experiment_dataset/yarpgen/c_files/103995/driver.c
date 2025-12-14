#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2218830510469362000LL;
_Bool var_10 = (_Bool)1;
signed char var_15 = (signed char)61;
signed char var_16 = (signed char)-98;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)21;
unsigned short var_19 = (unsigned short)63057;
void init() {
}

void checksum() {
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
