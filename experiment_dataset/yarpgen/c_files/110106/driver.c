#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2217304812U;
unsigned char var_3 = (unsigned char)78;
unsigned long long int var_4 = 16032539811557282209ULL;
unsigned short var_7 = (unsigned short)38335;
long long int var_8 = 4753194001470045719LL;
unsigned char var_9 = (unsigned char)29;
int zero = 0;
short var_10 = (short)17255;
unsigned short var_11 = (unsigned short)36353;
long long int var_12 = -4065572105053955105LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
