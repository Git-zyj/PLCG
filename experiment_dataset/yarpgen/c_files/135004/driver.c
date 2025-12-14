#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4673190905543197009LL;
short var_2 = (short)-10421;
signed char var_3 = (signed char)-123;
int var_6 = -1602310926;
unsigned short var_7 = (unsigned short)51434;
unsigned long long int var_13 = 7717892608151858913ULL;
unsigned long long int var_14 = 1643757485816368540ULL;
short var_16 = (short)-3343;
unsigned short var_17 = (unsigned short)48181;
int zero = 0;
int var_20 = 1059406423;
unsigned int var_21 = 2249659269U;
unsigned char var_22 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
