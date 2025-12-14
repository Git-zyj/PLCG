#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)17375;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)27;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)183;
int zero = 0;
short var_14 = (short)-25414;
long long int var_15 = -299366195642446233LL;
unsigned char var_16 = (unsigned char)222;
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
