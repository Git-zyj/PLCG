#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25314;
short var_3 = (short)-6874;
signed char var_4 = (signed char)-18;
signed char var_5 = (signed char)-46;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)5;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 7776690925657152401LL;
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
