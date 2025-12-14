#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
unsigned int var_2 = 3132888074U;
long long int var_3 = 4824494683938720726LL;
unsigned short var_4 = (unsigned short)4789;
short var_5 = (short)18623;
unsigned short var_6 = (unsigned short)50480;
unsigned char var_9 = (unsigned char)64;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-68;
short var_15 = (short)22160;
long long int var_16 = -4362038584495813072LL;
signed char var_17 = (signed char)100;
unsigned short var_18 = (unsigned short)54156;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
