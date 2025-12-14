#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1268178397U;
short var_4 = (short)-32301;
unsigned char var_7 = (unsigned char)156;
_Bool var_10 = (_Bool)0;
unsigned char var_14 = (unsigned char)143;
int var_15 = -1306975633;
int zero = 0;
unsigned short var_20 = (unsigned short)30534;
unsigned char var_21 = (unsigned char)214;
void init() {
}

void checksum() {
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
