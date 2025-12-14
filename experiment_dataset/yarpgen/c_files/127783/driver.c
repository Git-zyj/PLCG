#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-24737;
unsigned char var_4 = (unsigned char)25;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)175;
short var_13 = (short)3645;
int zero = 0;
signed char var_14 = (signed char)-115;
short var_15 = (short)-20681;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
