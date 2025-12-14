#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-26212;
signed char var_15 = (signed char)-39;
short var_16 = (short)-28314;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = 2431088310256411450LL;
unsigned int var_21 = 1739267581U;
void init() {
}

void checksum() {
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
