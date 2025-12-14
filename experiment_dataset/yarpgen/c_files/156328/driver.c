#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-39;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 17208535554175467361ULL;
signed char var_5 = (signed char)5;
signed char var_7 = (signed char)-121;
short var_14 = (short)6140;
int zero = 0;
int var_15 = -1772072923;
signed char var_16 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
