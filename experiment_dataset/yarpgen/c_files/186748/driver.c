#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1863859356;
_Bool var_5 = (_Bool)1;
long long int var_7 = 222479487561311255LL;
signed char var_12 = (signed char)-71;
unsigned long long int var_15 = 17583761245916351640ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15885876214329941715ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
