#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28602;
short var_1 = (short)-30258;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-2171;
signed char var_7 = (signed char)-67;
int zero = 0;
unsigned char var_14 = (unsigned char)122;
unsigned short var_15 = (unsigned short)65399;
long long int var_16 = 5843350373846731378LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
