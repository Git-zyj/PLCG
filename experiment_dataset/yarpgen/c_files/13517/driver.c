#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9036766633375192843LL;
int var_1 = 239075682;
int var_2 = 1237788099;
long long int var_7 = 8177413377951271378LL;
signed char var_10 = (signed char)10;
int zero = 0;
long long int var_15 = -3518138317980326973LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 4752717740083587272LL;
signed char var_18 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
