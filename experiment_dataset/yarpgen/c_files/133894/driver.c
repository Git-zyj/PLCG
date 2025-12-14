#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 882052820U;
int var_1 = 2038178153;
short var_2 = (short)-23196;
unsigned char var_3 = (unsigned char)243;
int var_5 = 1225628292;
int var_8 = -126075827;
long long int var_14 = -7844327062140873136LL;
int zero = 0;
short var_18 = (short)23050;
long long int var_19 = -7808851563653766508LL;
void init() {
}

void checksum() {
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
