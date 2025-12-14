#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-12244;
unsigned long long int var_5 = 6418681100001834751ULL;
int var_6 = 681784135;
int var_7 = -1527214294;
int zero = 0;
unsigned short var_16 = (unsigned short)58196;
signed char var_17 = (signed char)-25;
unsigned short var_18 = (unsigned short)12202;
void init() {
}

void checksum() {
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
