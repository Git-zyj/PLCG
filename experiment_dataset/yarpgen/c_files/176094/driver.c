#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11258469149276891733ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)19638;
unsigned int var_5 = 1612448567U;
unsigned int var_7 = 1349458958U;
unsigned int var_8 = 10669787U;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-26884;
unsigned char var_16 = (unsigned char)182;
unsigned char var_17 = (unsigned char)128;
unsigned int var_18 = 4213887943U;
int zero = 0;
long long int var_19 = -3317223319638662123LL;
signed char var_20 = (signed char)85;
unsigned int var_21 = 1563763290U;
signed char var_22 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
