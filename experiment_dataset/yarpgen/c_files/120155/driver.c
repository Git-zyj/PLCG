#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)1;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)1259;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_18 = (short)15375;
short var_19 = (short)-13843;
long long int var_20 = 7942766865621200267LL;
long long int var_21 = 7728017904237528263LL;
short var_22 = (short)-21882;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
