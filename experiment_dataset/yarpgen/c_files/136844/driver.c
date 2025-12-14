#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6544485300993815823LL;
_Bool var_4 = (_Bool)0;
signed char var_9 = (signed char)74;
int var_11 = -1708568465;
signed char var_12 = (signed char)-97;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
