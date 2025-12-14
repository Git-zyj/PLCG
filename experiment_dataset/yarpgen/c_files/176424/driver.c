#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)85;
long long int var_6 = -8858670946913751880LL;
unsigned short var_8 = (unsigned short)11100;
signed char var_10 = (signed char)80;
int zero = 0;
int var_13 = -2145025337;
short var_14 = (short)14858;
long long int var_15 = 5035592153680509799LL;
signed char var_16 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
