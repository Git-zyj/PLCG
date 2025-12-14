#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
short var_2 = (short)18016;
long long int var_6 = 8322636872947888325LL;
unsigned short var_7 = (unsigned short)28678;
_Bool var_10 = (_Bool)0;
short var_11 = (short)15755;
int zero = 0;
signed char var_12 = (signed char)74;
short var_13 = (short)-23651;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8932715344440101974LL;
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
