#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
long long int var_4 = 3188363971326893234LL;
long long int var_8 = -5460085455831749545LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = -643437332;
short var_13 = (short)-26048;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
