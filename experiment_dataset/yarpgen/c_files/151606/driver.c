#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)58;
short var_4 = (short)-1842;
unsigned int var_5 = 3685364615U;
int var_7 = 1627478061;
unsigned short var_9 = (unsigned short)56731;
unsigned char var_11 = (unsigned char)22;
unsigned short var_12 = (unsigned short)3635;
signed char var_14 = (signed char)87;
int var_16 = 1209168321;
unsigned int var_17 = 3248264875U;
unsigned char var_18 = (unsigned char)174;
int zero = 0;
unsigned short var_19 = (unsigned short)22486;
unsigned short var_20 = (unsigned short)48701;
long long int var_21 = 6468106964954588948LL;
int var_22 = -1843433572;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
