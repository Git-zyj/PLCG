#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-78;
signed char var_5 = (signed char)54;
_Bool var_8 = (_Bool)1;
long long int var_10 = 7902825352648706597LL;
_Bool var_12 = (_Bool)0;
signed char var_16 = (signed char)0;
int zero = 0;
short var_18 = (short)20804;
unsigned int var_19 = 572068859U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
