#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)150;
unsigned short var_3 = (unsigned short)860;
short var_6 = (short)-2980;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-29389;
short var_11 = (short)-9147;
unsigned short var_12 = (unsigned short)26232;
short var_13 = (short)-13428;
int zero = 0;
unsigned short var_15 = (unsigned short)15639;
short var_16 = (short)-7116;
_Bool var_17 = (_Bool)1;
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
