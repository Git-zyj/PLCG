#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)200;
unsigned long long int var_5 = 5297300598153233689ULL;
long long int var_6 = -19211396324607180LL;
unsigned long long int var_9 = 17245639976444021478ULL;
unsigned long long int var_10 = 15206491055580648186ULL;
unsigned char var_12 = (unsigned char)7;
unsigned long long int var_15 = 18059166028145491975ULL;
unsigned long long int var_17 = 15679523185945953620ULL;
unsigned short var_18 = (unsigned short)1380;
signed char var_19 = (signed char)-51;
int zero = 0;
short var_20 = (short)-22115;
unsigned long long int var_21 = 1866074452453137102ULL;
short var_22 = (short)12386;
int var_23 = 1031335294;
void init() {
}

void checksum() {
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
