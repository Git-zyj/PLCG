#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)158;
unsigned short var_5 = (unsigned short)44784;
signed char var_6 = (signed char)14;
short var_7 = (short)26321;
signed char var_8 = (signed char)-64;
int var_11 = 2109705117;
signed char var_14 = (signed char)69;
int zero = 0;
short var_15 = (short)-1669;
signed char var_16 = (signed char)-54;
unsigned short var_17 = (unsigned short)601;
unsigned short var_18 = (unsigned short)48523;
signed char var_19 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
