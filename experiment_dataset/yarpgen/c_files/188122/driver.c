#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)190;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)43451;
signed char var_7 = (signed char)-38;
unsigned char var_9 = (unsigned char)133;
unsigned char var_10 = (unsigned char)151;
int zero = 0;
unsigned long long int var_12 = 11307452906461306674ULL;
signed char var_13 = (signed char)-73;
short var_14 = (short)-9320;
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
