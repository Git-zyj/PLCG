#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 10240961150643616458ULL;
unsigned char var_2 = (unsigned char)197;
int var_5 = 1300403777;
unsigned short var_7 = (unsigned short)42660;
unsigned short var_10 = (unsigned short)561;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-12;
int var_13 = -967952060;
int var_17 = 456377806;
int zero = 0;
int var_18 = -1805618256;
unsigned int var_19 = 4294680646U;
long long int var_20 = 7074604801243400120LL;
long long int var_21 = 8105155284995746671LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
