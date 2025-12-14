#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9104100646013564635LL;
signed char var_3 = (signed char)-38;
signed char var_4 = (signed char)117;
signed char var_10 = (signed char)109;
signed char var_14 = (signed char)-11;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
