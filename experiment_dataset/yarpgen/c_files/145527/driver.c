#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-71;
unsigned long long int var_5 = 7986033731244289093ULL;
unsigned short var_7 = (unsigned short)38605;
signed char var_8 = (signed char)-65;
signed char var_13 = (signed char)58;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)18841;
int var_18 = -1555794278;
_Bool var_19 = (_Bool)1;
int var_20 = 1086986549;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
