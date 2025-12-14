#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56671;
unsigned short var_4 = (unsigned short)36008;
unsigned short var_5 = (unsigned short)44931;
int var_6 = 462990128;
unsigned long long int var_8 = 8795515838281687515ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)40521;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)23546;
unsigned short var_16 = (unsigned short)50520;
signed char var_17 = (signed char)-60;
unsigned char var_18 = (unsigned char)27;
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
