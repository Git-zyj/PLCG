#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-49;
int var_2 = 853409509;
unsigned short var_6 = (unsigned short)55970;
unsigned char var_7 = (unsigned char)225;
unsigned int var_11 = 1692781009U;
int zero = 0;
unsigned char var_16 = (unsigned char)229;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
