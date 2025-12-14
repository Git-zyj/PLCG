#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9091215348357666980LL;
_Bool var_15 = (_Bool)1;
long long int var_17 = -1949508433479057623LL;
int zero = 0;
unsigned long long int var_19 = 3362045766055351290ULL;
signed char var_20 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
