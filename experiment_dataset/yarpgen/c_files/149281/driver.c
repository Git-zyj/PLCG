#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49246;
unsigned int var_2 = 69146430U;
int var_4 = 1255184147;
long long int var_5 = -5483990703172099871LL;
signed char var_8 = (signed char)-6;
unsigned char var_10 = (unsigned char)210;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)66;
int zero = 0;
unsigned char var_13 = (unsigned char)184;
unsigned char var_14 = (unsigned char)10;
unsigned long long int var_15 = 12744441205529874135ULL;
void init() {
}

void checksum() {
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
