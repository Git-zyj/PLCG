#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
unsigned int var_1 = 3985363500U;
signed char var_2 = (signed char)-53;
unsigned int var_4 = 1373237074U;
unsigned int var_5 = 3480320699U;
unsigned short var_6 = (unsigned short)20063;
unsigned char var_7 = (unsigned char)93;
short var_8 = (short)-15909;
short var_11 = (short)14505;
signed char var_13 = (signed char)35;
int zero = 0;
unsigned int var_17 = 3102483438U;
long long int var_18 = -6002146875698348393LL;
unsigned short var_19 = (unsigned short)36294;
void init() {
}

void checksum() {
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
