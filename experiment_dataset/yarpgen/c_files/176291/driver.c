#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)209;
unsigned long long int var_7 = 5715445371031316319ULL;
unsigned char var_9 = (unsigned char)219;
signed char var_10 = (signed char)-13;
short var_16 = (short)-14504;
unsigned short var_18 = (unsigned short)27759;
short var_19 = (short)32715;
int zero = 0;
unsigned short var_20 = (unsigned short)38453;
short var_21 = (short)11360;
signed char var_22 = (signed char)-120;
unsigned long long int var_23 = 2130113455364731637ULL;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
