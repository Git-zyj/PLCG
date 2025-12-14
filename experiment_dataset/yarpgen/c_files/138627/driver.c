#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-41;
short var_3 = (short)-1460;
unsigned char var_5 = (unsigned char)216;
unsigned char var_6 = (unsigned char)250;
int var_8 = -1372627384;
short var_10 = (short)23894;
signed char var_11 = (signed char)-82;
int zero = 0;
signed char var_12 = (signed char)-52;
unsigned char var_13 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
