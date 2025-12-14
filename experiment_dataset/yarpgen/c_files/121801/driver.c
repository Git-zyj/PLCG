#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)87;
long long int var_4 = 1798443984138718966LL;
long long int var_5 = -1956975081157991801LL;
unsigned long long int var_9 = 1854478975109716141ULL;
int zero = 0;
signed char var_12 = (signed char)47;
long long int var_13 = -692981105921095619LL;
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
