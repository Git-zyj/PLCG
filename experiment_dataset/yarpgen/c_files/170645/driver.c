#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)20;
_Bool var_12 = (_Bool)0;
long long int var_14 = 7350490901068039907LL;
int zero = 0;
unsigned long long int var_20 = 9006095316971530361ULL;
long long int var_21 = -1925793438268690369LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
