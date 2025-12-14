#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)44;
short var_12 = (short)4681;
long long int var_17 = 4833031316710118469LL;
int zero = 0;
signed char var_18 = (signed char)-86;
_Bool var_19 = (_Bool)1;
short var_20 = (short)7532;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
