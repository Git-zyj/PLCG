#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10382;
short var_1 = (short)25028;
unsigned short var_2 = (unsigned short)10819;
unsigned short var_4 = (unsigned short)47700;
unsigned char var_5 = (unsigned char)252;
unsigned char var_6 = (unsigned char)70;
unsigned long long int var_7 = 3279372219198875888ULL;
unsigned long long int var_13 = 949030111679823758ULL;
unsigned long long int var_14 = 3354266952134705596ULL;
int zero = 0;
short var_20 = (short)10860;
unsigned long long int var_21 = 5114094961253563703ULL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)31428;
unsigned short var_24 = (unsigned short)34321;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
