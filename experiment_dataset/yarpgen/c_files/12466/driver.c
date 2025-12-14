#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 231142290;
unsigned char var_1 = (unsigned char)157;
unsigned short var_4 = (unsigned short)24250;
signed char var_5 = (signed char)96;
signed char var_6 = (signed char)46;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-26903;
signed char var_12 = (signed char)-103;
int zero = 0;
long long int var_13 = -2735088225903075735LL;
short var_14 = (short)-284;
signed char var_15 = (signed char)115;
unsigned char var_16 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
