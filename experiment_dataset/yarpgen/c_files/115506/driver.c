#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5372030980590827428LL;
_Bool var_3 = (_Bool)0;
int var_5 = -432319296;
unsigned char var_6 = (unsigned char)229;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)18769;
int zero = 0;
short var_16 = (short)-17761;
signed char var_17 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
