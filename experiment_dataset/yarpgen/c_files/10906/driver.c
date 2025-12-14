#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 182427049690122377ULL;
unsigned int var_1 = 2333783018U;
unsigned long long int var_2 = 975699190312681741ULL;
int var_4 = 506648767;
unsigned long long int var_5 = 16436665817681663698ULL;
short var_6 = (short)-9773;
unsigned short var_10 = (unsigned short)25020;
unsigned char var_11 = (unsigned char)98;
unsigned short var_13 = (unsigned short)25745;
_Bool var_16 = (_Bool)1;
long long int var_17 = 2694561175616533428LL;
unsigned int var_18 = 3564722210U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14655624436546689568ULL;
short var_22 = (short)-25785;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
