#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)36;
short var_4 = (short)-7602;
short var_5 = (short)-17762;
int var_7 = -521153553;
unsigned int var_8 = 3222660538U;
unsigned short var_15 = (unsigned short)57578;
int zero = 0;
signed char var_19 = (signed char)121;
unsigned char var_20 = (unsigned char)94;
int var_21 = -1086040115;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
