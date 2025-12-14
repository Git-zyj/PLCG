#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)-96;
unsigned short var_4 = (unsigned short)22256;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)49358;
short var_14 = (short)-811;
unsigned char var_16 = (unsigned char)5;
long long int var_17 = 6465736650533238664LL;
int zero = 0;
long long int var_18 = -8749609800386836534LL;
signed char var_19 = (signed char)-28;
unsigned char var_20 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
