#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -891838070;
int var_4 = 730312532;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 854415239U;
short var_12 = (short)-20322;
int zero = 0;
int var_14 = -544738747;
long long int var_15 = 3994974259956054299LL;
void init() {
}

void checksum() {
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
