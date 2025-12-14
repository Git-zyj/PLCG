#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13612;
long long int var_4 = 7260643805070449512LL;
_Bool var_5 = (_Bool)0;
short var_8 = (short)18520;
int zero = 0;
short var_13 = (short)32080;
short var_14 = (short)30008;
signed char var_15 = (signed char)-62;
void init() {
}

void checksum() {
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
