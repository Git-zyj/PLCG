#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3172688848766717325LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6602663457690221595LL;
unsigned int var_15 = 1570530868U;
int zero = 0;
unsigned int var_17 = 2559729514U;
unsigned long long int var_18 = 13323188088445814218ULL;
void init() {
}

void checksum() {
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
