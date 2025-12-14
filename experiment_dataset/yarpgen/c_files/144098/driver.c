#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-11;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 10204217187497303324ULL;
signed char var_12 = (signed char)43;
long long int var_13 = -6423009775454027262LL;
_Bool var_14 = (_Bool)1;
short var_16 = (short)1374;
int zero = 0;
int var_18 = 1083123451;
short var_19 = (short)-15749;
unsigned char var_20 = (unsigned char)245;
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
