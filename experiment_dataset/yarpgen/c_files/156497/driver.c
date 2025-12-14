#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49391;
unsigned int var_4 = 1001957140U;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)31;
short var_7 = (short)-16950;
signed char var_8 = (signed char)-72;
unsigned char var_9 = (unsigned char)84;
unsigned char var_10 = (unsigned char)72;
unsigned char var_13 = (unsigned char)19;
unsigned short var_15 = (unsigned short)52548;
int zero = 0;
signed char var_18 = (signed char)-120;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)3136;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
