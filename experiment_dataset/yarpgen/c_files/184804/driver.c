#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1498825903;
long long int var_3 = -3475870933276733301LL;
signed char var_4 = (signed char)-96;
unsigned short var_6 = (unsigned short)19963;
int zero = 0;
short var_20 = (short)-14261;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)71;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
