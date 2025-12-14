#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = 1055986701;
unsigned short var_5 = (unsigned short)6855;
short var_9 = (short)-48;
unsigned short var_11 = (unsigned short)47486;
int var_12 = 1378335066;
signed char var_14 = (signed char)41;
int zero = 0;
short var_18 = (short)30148;
unsigned short var_19 = (unsigned short)42686;
signed char var_20 = (signed char)-50;
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
