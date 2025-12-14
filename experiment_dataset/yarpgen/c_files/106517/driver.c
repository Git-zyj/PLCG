#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)68;
long long int var_4 = 6666468919427657036LL;
int var_5 = -1629193588;
unsigned short var_6 = (unsigned short)9849;
short var_9 = (short)-1753;
long long int var_10 = 7685107586705205109LL;
int zero = 0;
unsigned int var_11 = 1465963006U;
signed char var_12 = (signed char)104;
unsigned char var_13 = (unsigned char)100;
unsigned short var_14 = (unsigned short)63042;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
