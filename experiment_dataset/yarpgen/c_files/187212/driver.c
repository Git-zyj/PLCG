#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
unsigned long long int var_5 = 16425592037176661894ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)4;
unsigned long long int var_11 = 9385584499524105248ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = -937234902;
unsigned short var_15 = (unsigned short)3761;
unsigned short var_16 = (unsigned short)60905;
void init() {
}

void checksum() {
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
