#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)48;
short var_9 = (short)-10034;
signed char var_10 = (signed char)-42;
int var_11 = 81558313;
long long int var_12 = -2410536838240991741LL;
long long int var_16 = -7142739509115734968LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1165757934;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
