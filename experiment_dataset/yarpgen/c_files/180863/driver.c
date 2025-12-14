#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 565717396U;
short var_1 = (short)11652;
long long int var_2 = 6970821947048241341LL;
short var_5 = (short)-15397;
long long int var_7 = 85944280346925688LL;
long long int var_10 = -1402283803405760465LL;
unsigned int var_11 = 2553926211U;
long long int var_14 = -6632010053989163622LL;
int zero = 0;
long long int var_17 = 4931540180460415714LL;
long long int var_18 = 8555011340967554860LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
