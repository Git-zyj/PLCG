#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 6205210688442356504ULL;
long long int var_3 = -3889297053247024071LL;
long long int var_6 = -7405852488376068548LL;
unsigned char var_7 = (unsigned char)58;
unsigned char var_8 = (unsigned char)140;
long long int var_10 = 1904619152698868562LL;
short var_12 = (short)-25093;
int zero = 0;
unsigned int var_15 = 1227059946U;
unsigned char var_16 = (unsigned char)97;
short var_17 = (short)4534;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
