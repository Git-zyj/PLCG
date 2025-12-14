#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
short var_1 = (short)-8411;
unsigned long long int var_3 = 14859840074951312636ULL;
signed char var_7 = (signed char)-63;
signed char var_11 = (signed char)-122;
signed char var_12 = (signed char)-102;
int zero = 0;
unsigned char var_16 = (unsigned char)187;
short var_17 = (short)-12858;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
