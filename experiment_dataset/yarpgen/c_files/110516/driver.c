#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5153358787829746740ULL;
long long int var_4 = -6033538044536545509LL;
long long int var_5 = 4311101907153269092LL;
unsigned int var_6 = 1280521727U;
short var_9 = (short)-16265;
long long int var_10 = 1572477081286979054LL;
unsigned long long int var_13 = 5303932248436600452ULL;
int var_14 = -1117125272;
unsigned int var_15 = 3427538575U;
signed char var_17 = (signed char)-98;
unsigned char var_18 = (unsigned char)150;
int zero = 0;
long long int var_19 = 6836451772463210397LL;
unsigned short var_20 = (unsigned short)21176;
signed char var_21 = (signed char)-57;
signed char var_22 = (signed char)117;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
