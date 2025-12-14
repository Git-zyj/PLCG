#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10197;
_Bool var_7 = (_Bool)1;
short var_12 = (short)-28572;
int zero = 0;
unsigned char var_16 = (unsigned char)141;
signed char var_17 = (signed char)-82;
int var_18 = -1519224323;
void init() {
}

void checksum() {
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
