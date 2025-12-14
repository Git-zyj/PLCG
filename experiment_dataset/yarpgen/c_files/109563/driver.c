#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
unsigned int var_1 = 1823659431U;
unsigned short var_5 = (unsigned short)56041;
unsigned short var_7 = (unsigned short)35075;
unsigned short var_9 = (unsigned short)34717;
unsigned int var_10 = 1361443750U;
short var_13 = (short)-28768;
signed char var_14 = (signed char)-85;
unsigned long long int var_15 = 5647430493092793036ULL;
unsigned int var_16 = 47378499U;
int zero = 0;
signed char var_19 = (signed char)7;
unsigned short var_20 = (unsigned short)56771;
_Bool var_21 = (_Bool)0;
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
