#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
signed char var_1 = (signed char)96;
long long int var_4 = 5794936176638428290LL;
unsigned char var_5 = (unsigned char)229;
unsigned char var_7 = (unsigned char)225;
unsigned int var_8 = 2451782613U;
unsigned short var_10 = (unsigned short)61770;
signed char var_11 = (signed char)-68;
int zero = 0;
signed char var_17 = (signed char)-97;
long long int var_18 = -4791766969319780975LL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-18336;
void init() {
}

void checksum() {
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
