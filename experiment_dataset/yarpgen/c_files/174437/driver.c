#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
unsigned int var_1 = 1265974090U;
short var_5 = (short)19457;
unsigned char var_6 = (unsigned char)52;
signed char var_7 = (signed char)-38;
unsigned short var_8 = (unsigned short)42167;
unsigned long long int var_10 = 1790408218371201401ULL;
int zero = 0;
long long int var_13 = -2229689857733143948LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)78;
signed char var_16 = (signed char)-62;
unsigned short var_17 = (unsigned short)11777;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
