#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1003600121018428633ULL;
signed char var_10 = (signed char)104;
int zero = 0;
short var_19 = (short)26484;
long long int var_20 = 8583585696614930752LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -1788519233715705521LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
