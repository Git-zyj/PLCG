#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -712602405;
unsigned long long int var_3 = 10652594829701485050ULL;
unsigned short var_4 = (unsigned short)46138;
short var_9 = (short)28329;
unsigned int var_11 = 3409341006U;
long long int var_12 = -5281609989842078797LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2920479651U;
int zero = 0;
unsigned int var_17 = 1837520465U;
unsigned short var_18 = (unsigned short)55671;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
