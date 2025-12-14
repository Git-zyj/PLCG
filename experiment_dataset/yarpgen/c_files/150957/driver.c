#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1449802181U;
unsigned int var_1 = 1591942674U;
unsigned short var_6 = (unsigned short)56353;
int var_7 = -1383899940;
long long int var_8 = 3770213436774662426LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1060285121U;
short var_15 = (short)-26459;
int zero = 0;
short var_16 = (short)-24711;
long long int var_17 = -3081835152705018060LL;
unsigned long long int var_18 = 6832376584687064113ULL;
unsigned char var_19 = (unsigned char)13;
unsigned int var_20 = 4119795521U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
