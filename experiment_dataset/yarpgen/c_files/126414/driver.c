#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)28546;
unsigned long long int var_6 = 4544340698982484441ULL;
unsigned long long int var_10 = 6925529446501464060ULL;
signed char var_12 = (signed char)32;
short var_13 = (short)-28413;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)39017;
int zero = 0;
unsigned int var_19 = 3465820710U;
signed char var_20 = (signed char)-83;
long long int var_21 = -4220328620255348834LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
