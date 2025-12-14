#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)84;
long long int var_6 = -3066667988253753757LL;
int var_12 = 690406226;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)15;
long long int var_21 = 3903370354758225853LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = 4247345100968098719LL;
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
