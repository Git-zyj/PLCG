#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)5;
unsigned char var_2 = (unsigned char)52;
int var_4 = 1418208869;
unsigned char var_6 = (unsigned char)145;
unsigned long long int var_7 = 14624027837376701419ULL;
short var_10 = (short)-28586;
short var_12 = (short)22836;
int zero = 0;
short var_14 = (short)-30770;
short var_15 = (short)22938;
unsigned int var_16 = 3444372257U;
int var_17 = 956157605;
signed char var_18 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
