#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2104833329U;
unsigned char var_3 = (unsigned char)90;
int var_6 = 1791500458;
unsigned long long int var_8 = 7855569629446498153ULL;
signed char var_9 = (signed char)-65;
signed char var_10 = (signed char)-23;
unsigned int var_14 = 1364659643U;
unsigned long long int var_16 = 14152337959124029377ULL;
unsigned short var_18 = (unsigned short)49709;
int zero = 0;
signed char var_19 = (signed char)22;
unsigned short var_20 = (unsigned short)13812;
unsigned char var_21 = (unsigned char)66;
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
