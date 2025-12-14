#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2274909229145440471LL;
signed char var_1 = (signed char)-39;
unsigned int var_3 = 521560431U;
short var_4 = (short)21939;
short var_10 = (short)7266;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)(-127 - 1);
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
