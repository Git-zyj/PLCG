#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9211503772678549870ULL;
short var_2 = (short)-10689;
unsigned char var_3 = (unsigned char)215;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)31167;
int zero = 0;
unsigned short var_12 = (unsigned short)5276;
unsigned int var_13 = 1880723156U;
signed char var_14 = (signed char)-46;
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
