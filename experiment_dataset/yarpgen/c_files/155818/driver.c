#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1866278682;
unsigned long long int var_2 = 7439302088851863967ULL;
_Bool var_7 = (_Bool)1;
long long int var_9 = -4248318713189348567LL;
long long int var_10 = 7068479528859265866LL;
int var_12 = 2141185450;
int zero = 0;
int var_14 = -1176543335;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
