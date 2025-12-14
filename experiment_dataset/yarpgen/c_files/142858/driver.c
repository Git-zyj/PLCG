#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 15464507U;
unsigned short var_4 = (unsigned short)46596;
unsigned char var_6 = (unsigned char)229;
short var_8 = (short)-14647;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 12542634166457144424ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_17 = (unsigned char)108;
int zero = 0;
unsigned int var_20 = 713694196U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
