#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3855135696270040628LL;
signed char var_2 = (signed char)-72;
unsigned int var_4 = 2548948341U;
unsigned short var_6 = (unsigned short)63171;
unsigned char var_8 = (unsigned char)171;
short var_9 = (short)-16233;
short var_10 = (short)16821;
unsigned long long int var_11 = 1511038810327733378ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)249;
unsigned long long int var_13 = 7779425951867910634ULL;
long long int var_14 = -22683989791499183LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
