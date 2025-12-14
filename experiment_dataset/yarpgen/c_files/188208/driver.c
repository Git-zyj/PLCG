#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4195602184453553646LL;
unsigned long long int var_6 = 12119367083023620946ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)29016;
unsigned char var_10 = (unsigned char)123;
unsigned char var_13 = (unsigned char)21;
long long int var_15 = -5083382914895498856LL;
unsigned long long int var_16 = 13844684123807245342ULL;
int zero = 0;
int var_18 = 1338125193;
short var_19 = (short)14320;
int var_20 = 1846606907;
void init() {
}

void checksum() {
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
