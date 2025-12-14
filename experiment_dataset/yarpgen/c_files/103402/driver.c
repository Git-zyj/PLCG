#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3544852500U;
signed char var_12 = (signed char)-14;
unsigned long long int var_14 = 14242143162405711343ULL;
int zero = 0;
unsigned int var_19 = 3036771857U;
unsigned int var_20 = 1606642003U;
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
