#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -442670601;
int var_4 = 1115454014;
unsigned char var_5 = (unsigned char)18;
unsigned short var_6 = (unsigned short)64238;
int var_11 = -1639816438;
unsigned int var_12 = 4078587169U;
int var_16 = 1462477168;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1044956665;
short var_19 = (short)-383;
unsigned char var_20 = (unsigned char)29;
int var_21 = 497462221;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
