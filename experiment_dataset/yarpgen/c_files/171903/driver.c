#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9034435563807809350LL;
unsigned short var_2 = (unsigned short)56719;
unsigned char var_5 = (unsigned char)81;
unsigned char var_7 = (unsigned char)225;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)-23168;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
