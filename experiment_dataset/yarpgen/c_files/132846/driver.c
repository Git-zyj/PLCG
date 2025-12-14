#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25080;
unsigned short var_2 = (unsigned short)56389;
unsigned short var_4 = (unsigned short)12952;
short var_5 = (short)-5862;
unsigned short var_7 = (unsigned short)52307;
unsigned long long int var_8 = 8716068538916555156ULL;
signed char var_11 = (signed char)68;
unsigned long long int var_13 = 1680999303807733619ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)26170;
unsigned long long int var_16 = 7571186614458086153ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
