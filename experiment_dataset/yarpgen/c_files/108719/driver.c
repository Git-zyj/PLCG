#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50449;
unsigned char var_1 = (unsigned char)80;
short var_2 = (short)-2453;
signed char var_3 = (signed char)92;
unsigned long long int var_4 = 15655660967707827422ULL;
unsigned long long int var_5 = 4759051744512700810ULL;
unsigned long long int var_6 = 9529697758516078109ULL;
unsigned int var_7 = 809497930U;
unsigned short var_8 = (unsigned short)53502;
int zero = 0;
unsigned short var_11 = (unsigned short)16520;
unsigned short var_12 = (unsigned short)52408;
short var_13 = (short)-2215;
unsigned short var_14 = (unsigned short)59925;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
