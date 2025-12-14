#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25319;
_Bool var_2 = (_Bool)0;
long long int var_3 = -2477207711293907440LL;
signed char var_8 = (signed char)53;
signed char var_14 = (signed char)-71;
int zero = 0;
unsigned int var_15 = 3670349713U;
unsigned short var_16 = (unsigned short)37995;
unsigned char var_17 = (unsigned char)200;
void init() {
}

void checksum() {
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
