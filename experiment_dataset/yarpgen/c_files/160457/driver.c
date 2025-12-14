#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-38;
unsigned long long int var_13 = 4703523125038843315ULL;
signed char var_14 = (signed char)-41;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4284116170042245336ULL;
unsigned long long int var_17 = 10269207119518375871ULL;
void init() {
}

void checksum() {
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
