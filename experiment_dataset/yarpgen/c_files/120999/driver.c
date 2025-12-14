#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 660829288;
unsigned char var_2 = (unsigned char)178;
short var_3 = (short)-25134;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_11 = 1448456917;
int var_12 = 138817375;
unsigned char var_14 = (unsigned char)95;
signed char var_15 = (signed char)25;
unsigned short var_16 = (unsigned short)36300;
int zero = 0;
int var_20 = 1609465000;
signed char var_21 = (signed char)-49;
void init() {
}

void checksum() {
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
