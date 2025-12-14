#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1629142585U;
unsigned int var_1 = 1733675103U;
unsigned short var_3 = (unsigned short)7138;
unsigned short var_4 = (unsigned short)3996;
short var_5 = (short)-1372;
short var_6 = (short)9367;
int var_8 = 1561183423;
signed char var_9 = (signed char)-18;
int zero = 0;
unsigned short var_10 = (unsigned short)569;
unsigned short var_11 = (unsigned short)38122;
unsigned int var_12 = 4055815679U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2756521444U;
unsigned char var_15 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
