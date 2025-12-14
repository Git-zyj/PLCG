#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12958888560519251831ULL;
unsigned int var_6 = 1796062467U;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2797696550033642855LL;
signed char var_16 = (signed char)-95;
unsigned long long int var_17 = 7812309454154847730ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
