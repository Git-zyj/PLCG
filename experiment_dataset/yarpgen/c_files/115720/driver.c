#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
int var_1 = -1528706672;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14451599913399839769ULL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-72;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)47645;
int zero = 0;
unsigned char var_14 = (unsigned char)1;
unsigned int var_15 = 2022136744U;
short var_16 = (short)-3709;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
