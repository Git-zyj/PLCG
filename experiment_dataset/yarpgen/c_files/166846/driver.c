#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-2;
long long int var_9 = 285963583214460831LL;
unsigned int var_10 = 3144460611U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)3080;
signed char var_14 = (signed char)37;
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
