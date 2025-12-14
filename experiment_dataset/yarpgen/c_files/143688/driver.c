#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 7333588131325292686LL;
signed char var_2 = (signed char)-111;
long long int var_5 = 769178345699771690LL;
long long int var_7 = -1752658869068016364LL;
unsigned int var_11 = 439431655U;
int zero = 0;
unsigned long long int var_13 = 17719105381526638725ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3952752702673785599LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
