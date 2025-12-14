#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9025603062862231384LL;
short var_3 = (short)10279;
int var_7 = -525617455;
long long int var_13 = -4452439195169121872LL;
int zero = 0;
long long int var_20 = -4875339765177437907LL;
long long int var_21 = -8718071548015686020LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
