#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1824055061U;
unsigned long long int var_1 = 8652149362439200225ULL;
unsigned int var_2 = 474017603U;
int var_3 = -70090764;
unsigned short var_4 = (unsigned short)43588;
int var_5 = 1021577809;
unsigned long long int var_6 = 5434464086521375577ULL;
unsigned int var_8 = 1033067030U;
unsigned short var_9 = (unsigned short)62996;
int var_12 = 1465126572;
int zero = 0;
short var_13 = (short)-30747;
unsigned int var_14 = 1352113524U;
unsigned int var_15 = 2878066022U;
unsigned long long int var_16 = 5390544242307496107ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
