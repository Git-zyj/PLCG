#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11127;
unsigned int var_2 = 3349090469U;
long long int var_4 = -1282391230827891933LL;
unsigned char var_6 = (unsigned char)122;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1709876451U;
unsigned int var_16 = 993908754U;
int zero = 0;
unsigned short var_17 = (unsigned short)35710;
int var_18 = -1552975143;
unsigned char var_19 = (unsigned char)167;
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
