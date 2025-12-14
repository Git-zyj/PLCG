#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9049761777413920377LL;
unsigned int var_4 = 1152236389U;
unsigned long long int var_8 = 3889247799237239741ULL;
int zero = 0;
short var_11 = (short)3864;
unsigned long long int var_12 = 15651789563108282981ULL;
short var_13 = (short)-20796;
signed char var_14 = (signed char)-39;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
