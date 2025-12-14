#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 3551340133U;
long long int var_10 = 3074899197459306998LL;
int zero = 0;
int var_14 = -1830486168;
long long int var_15 = 2069008661575306856LL;
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
