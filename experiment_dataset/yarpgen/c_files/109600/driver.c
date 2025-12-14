#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1229210632U;
signed char var_6 = (signed char)87;
unsigned int var_10 = 3408415276U;
unsigned int var_11 = 1827887974U;
int zero = 0;
long long int var_12 = -8981153519583686450LL;
signed char var_13 = (signed char)90;
long long int var_14 = -2371007574258796811LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
