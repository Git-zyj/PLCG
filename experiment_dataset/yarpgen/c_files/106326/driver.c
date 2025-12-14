#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 17244290678370189459ULL;
int var_2 = 1444021730;
unsigned long long int var_4 = 13717386806846385462ULL;
unsigned char var_5 = (unsigned char)18;
short var_6 = (short)-28054;
int var_9 = -746974127;
int zero = 0;
short var_12 = (short)1948;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)230;
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
