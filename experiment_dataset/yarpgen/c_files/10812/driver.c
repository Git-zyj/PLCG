#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
unsigned short var_1 = (unsigned short)19171;
unsigned long long int var_2 = 7390253652861073743ULL;
_Bool var_3 = (_Bool)0;
int var_4 = -1230152903;
int var_5 = 1475250022;
long long int var_9 = 2357130233543793828LL;
long long int var_11 = -3108575303093053731LL;
unsigned long long int var_13 = 11449854869931496086ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)85;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 860059326U;
short var_19 = (short)15667;
unsigned short var_20 = (unsigned short)59087;
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
