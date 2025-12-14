#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11687480936143141621ULL;
signed char var_3 = (signed char)-49;
unsigned int var_4 = 1058303955U;
signed char var_6 = (signed char)-12;
short var_7 = (short)-5623;
unsigned short var_8 = (unsigned short)44073;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)9;
signed char var_14 = (signed char)-67;
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
