#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)105;
int var_9 = 1767634808;
unsigned long long int var_13 = 11131080070891497660ULL;
long long int var_15 = -5921752988036914743LL;
long long int var_18 = 5008314047885988312LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -1276691390681357100LL;
signed char var_21 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
