#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 242703015959018399ULL;
signed char var_3 = (signed char)-15;
short var_4 = (short)-26552;
unsigned char var_5 = (unsigned char)75;
unsigned short var_7 = (unsigned short)48110;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -1714639771123686571LL;
short var_12 = (short)12236;
unsigned short var_13 = (unsigned short)54268;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
