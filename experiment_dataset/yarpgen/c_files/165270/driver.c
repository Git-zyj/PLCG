#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned short var_3 = (unsigned short)50186;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1010233844U;
unsigned char var_7 = (unsigned char)40;
short var_9 = (short)-22866;
signed char var_11 = (signed char)-14;
unsigned int var_13 = 912887848U;
int zero = 0;
unsigned short var_15 = (unsigned short)23619;
unsigned int var_16 = 4148456906U;
unsigned int var_17 = 4123146852U;
unsigned int var_18 = 2872593261U;
short var_19 = (short)-26929;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
