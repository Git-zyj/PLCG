#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6411;
unsigned short var_1 = (unsigned short)2936;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)107;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2088008341U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-27864;
unsigned char var_10 = (unsigned char)197;
unsigned short var_11 = (unsigned short)28208;
int var_12 = 2096626504;
long long int var_14 = 177158380270168009LL;
signed char var_18 = (signed char)-127;
int var_19 = 1329827073;
int zero = 0;
unsigned char var_20 = (unsigned char)159;
unsigned int var_21 = 561216473U;
unsigned int var_22 = 3412468248U;
int var_23 = 625596404;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
