#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2326109845U;
signed char var_8 = (signed char)-96;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 7251503363462244432ULL;
unsigned int var_20 = 3641585163U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
