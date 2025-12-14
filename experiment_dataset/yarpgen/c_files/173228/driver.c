#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48838;
unsigned short var_3 = (unsigned short)56402;
unsigned char var_6 = (unsigned char)125;
_Bool var_7 = (_Bool)1;
int var_9 = 980375798;
unsigned short var_10 = (unsigned short)5539;
int zero = 0;
unsigned int var_11 = 4104897598U;
short var_12 = (short)-16528;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
