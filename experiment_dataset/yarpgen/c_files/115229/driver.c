#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2038403324151745707LL;
short var_5 = (short)3279;
signed char var_6 = (signed char)95;
long long int var_8 = 129558070066251684LL;
short var_10 = (short)-20636;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8919694392311675365LL;
long long int var_15 = -6288753099473350994LL;
void init() {
}

void checksum() {
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
