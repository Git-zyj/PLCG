#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29167;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)41;
signed char var_5 = (signed char)-102;
short var_6 = (short)20788;
unsigned char var_7 = (unsigned char)74;
unsigned int var_8 = 1485290407U;
unsigned long long int var_9 = 12501560968006027000ULL;
int var_10 = -1647324223;
short var_11 = (short)18013;
int zero = 0;
short var_12 = (short)-8896;
unsigned short var_13 = (unsigned short)17113;
unsigned int var_14 = 647995712U;
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
