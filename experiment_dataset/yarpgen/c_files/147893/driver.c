#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
int var_4 = 411959465;
long long int var_6 = -6200037983856820048LL;
unsigned short var_7 = (unsigned short)54312;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)44662;
int zero = 0;
unsigned char var_11 = (unsigned char)109;
signed char var_12 = (signed char)-121;
short var_13 = (short)-22791;
void init() {
}

void checksum() {
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
