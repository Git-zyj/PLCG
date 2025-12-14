#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20824;
_Bool var_1 = (_Bool)0;
int var_4 = 1884076870;
long long int var_5 = -6987541938155443681LL;
unsigned short var_6 = (unsigned short)26359;
short var_7 = (short)-26861;
unsigned long long int var_8 = 12220495962894575606ULL;
int var_14 = 1929309717;
int zero = 0;
int var_17 = 1849791713;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)2;
unsigned short var_20 = (unsigned short)20437;
int var_21 = 1840325895;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
