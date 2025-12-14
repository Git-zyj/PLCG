#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
short var_3 = (short)-6199;
signed char var_4 = (signed char)-78;
signed char var_5 = (signed char)-64;
long long int var_10 = 2070506516147121076LL;
unsigned short var_12 = (unsigned short)29233;
short var_13 = (short)17908;
short var_14 = (short)8672;
int zero = 0;
unsigned short var_19 = (unsigned short)49386;
unsigned char var_20 = (unsigned char)19;
signed char var_21 = (signed char)-5;
signed char var_22 = (signed char)-10;
signed char var_23 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
