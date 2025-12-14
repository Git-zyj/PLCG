#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13722624088988067415ULL;
unsigned long long int var_2 = 8357548602274772936ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)44;
unsigned long long int var_11 = 9545981963752059358ULL;
unsigned char var_12 = (unsigned char)56;
int zero = 0;
int var_13 = 102425539;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3726747955287365569LL;
unsigned short var_16 = (unsigned short)4896;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
