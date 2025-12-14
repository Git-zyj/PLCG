#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)191;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-47;
unsigned long long int var_6 = 5210891560580659298ULL;
unsigned short var_10 = (unsigned short)27565;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 17261298279832066875ULL;
unsigned char var_13 = (unsigned char)148;
unsigned char var_14 = (unsigned char)213;
int var_15 = -1643079425;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
