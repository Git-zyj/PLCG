#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_19 = 2937560694455390400ULL;
int zero = 0;
signed char var_20 = (signed char)-58;
_Bool var_21 = (_Bool)1;
short var_22 = (short)25831;
unsigned int var_23 = 2516023148U;
signed char var_24 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
