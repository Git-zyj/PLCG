#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)241;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)233;
unsigned char var_7 = (unsigned char)243;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)76;
int zero = 0;
short var_12 = (short)-26373;
short var_13 = (short)7110;
unsigned char var_14 = (unsigned char)28;
void init() {
}

void checksum() {
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
