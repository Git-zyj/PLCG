#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-27480;
unsigned long long int var_6 = 13026759620508166822ULL;
unsigned char var_7 = (unsigned char)244;
signed char var_8 = (signed char)60;
signed char var_11 = (signed char)-32;
int var_13 = -1511798674;
signed char var_15 = (signed char)-111;
signed char var_18 = (signed char)89;
int zero = 0;
unsigned char var_20 = (unsigned char)7;
int var_21 = 1568846249;
signed char var_22 = (signed char)-7;
signed char var_23 = (signed char)47;
unsigned char var_24 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
