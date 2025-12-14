#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = -1905965305385419561LL;
short var_7 = (short)30500;
long long int var_8 = 6418301155694384966LL;
short var_10 = (short)-4636;
signed char var_11 = (signed char)-16;
int zero = 0;
unsigned int var_12 = 945253018U;
unsigned long long int var_13 = 2190337828880698800ULL;
void init() {
}

void checksum() {
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
