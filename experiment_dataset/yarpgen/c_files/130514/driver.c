#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-43;
short var_11 = (short)-31328;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 15503374078379160403ULL;
unsigned long long int var_18 = 2385523411551020373ULL;
signed char var_19 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
