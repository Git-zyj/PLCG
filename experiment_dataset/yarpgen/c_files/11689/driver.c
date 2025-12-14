#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60847;
unsigned long long int var_1 = 7086022964086610546ULL;
unsigned char var_2 = (unsigned char)107;
unsigned long long int var_3 = 12312263142456149967ULL;
signed char var_4 = (signed char)-56;
unsigned long long int var_5 = 18198859062921979335ULL;
unsigned long long int var_6 = 12080783176881291820ULL;
unsigned long long int var_7 = 16617667995712793441ULL;
unsigned int var_8 = 2303798283U;
short var_9 = (short)8440;
unsigned int var_10 = 1234849983U;
long long int var_11 = -1999498306210307585LL;
unsigned short var_12 = (unsigned short)20586;
int zero = 0;
unsigned short var_13 = (unsigned short)60035;
int var_14 = 2074824139;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
