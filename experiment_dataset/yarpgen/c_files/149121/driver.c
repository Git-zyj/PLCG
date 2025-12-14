#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3426524789278738021LL;
signed char var_6 = (signed char)96;
signed char var_8 = (signed char)-74;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)60785;
int zero = 0;
unsigned short var_12 = (unsigned short)6512;
short var_13 = (short)32669;
signed char var_14 = (signed char)57;
unsigned long long int var_15 = 7418259081966390253ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
