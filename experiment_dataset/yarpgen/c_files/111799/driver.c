#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4370723815346700708ULL;
short var_13 = (short)26221;
_Bool var_17 = (_Bool)1;
short var_19 = (short)-10905;
int zero = 0;
signed char var_20 = (signed char)118;
int var_21 = 1777863820;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
