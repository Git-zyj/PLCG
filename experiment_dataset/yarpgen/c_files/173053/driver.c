#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9275;
short var_4 = (short)-13528;
unsigned short var_5 = (unsigned short)46521;
_Bool var_7 = (_Bool)1;
short var_8 = (short)6582;
long long int var_12 = -6009930449452704905LL;
unsigned short var_13 = (unsigned short)54676;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 7626500970941667867ULL;
unsigned char var_16 = (unsigned char)19;
unsigned long long int var_17 = 8977550917754855641ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
