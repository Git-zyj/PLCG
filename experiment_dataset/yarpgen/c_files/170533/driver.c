#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)76;
short var_2 = (short)-13779;
short var_3 = (short)9223;
unsigned short var_5 = (unsigned short)29100;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 9498660716901526569ULL;
unsigned char var_22 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
