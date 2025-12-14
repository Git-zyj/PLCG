#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26443;
short var_3 = (short)-29075;
signed char var_4 = (signed char)-6;
long long int var_15 = -2626389016367734452LL;
int zero = 0;
unsigned short var_17 = (unsigned short)48357;
signed char var_18 = (signed char)-46;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)253;
int var_21 = -1414180740;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
