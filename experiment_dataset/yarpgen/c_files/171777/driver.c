#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = -1112525848;
unsigned int var_6 = 1691377598U;
int var_10 = -170522509;
int zero = 0;
signed char var_14 = (signed char)77;
short var_15 = (short)15239;
long long int var_16 = 8569397824234066089LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
