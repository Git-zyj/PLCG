#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)18228;
short var_4 = (short)13745;
unsigned char var_5 = (unsigned char)34;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)139;
short var_8 = (short)-21250;
signed char var_9 = (signed char)-63;
unsigned char var_10 = (unsigned char)171;
int zero = 0;
int var_12 = 132669536;
int var_13 = 1170648134;
unsigned int var_14 = 1914599680U;
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
