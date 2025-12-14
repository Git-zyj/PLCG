#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
signed char var_3 = (signed char)17;
unsigned char var_4 = (unsigned char)110;
unsigned long long int var_6 = 6318556726119089095ULL;
signed char var_8 = (signed char)-102;
unsigned char var_9 = (unsigned char)183;
unsigned int var_10 = 4276151810U;
signed char var_12 = (signed char)(-127 - 1);
short var_13 = (short)-5343;
int zero = 0;
signed char var_14 = (signed char)114;
unsigned char var_15 = (unsigned char)225;
unsigned short var_16 = (unsigned short)1707;
unsigned char var_17 = (unsigned char)55;
signed char var_18 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
