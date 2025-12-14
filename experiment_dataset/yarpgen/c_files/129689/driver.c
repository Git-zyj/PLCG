#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17138;
unsigned long long int var_3 = 17712788017618844107ULL;
unsigned char var_4 = (unsigned char)115;
unsigned long long int var_5 = 14579363426648851147ULL;
unsigned long long int var_8 = 530749808455887555ULL;
unsigned long long int var_9 = 18126364007827003247ULL;
unsigned int var_10 = 1290149785U;
unsigned long long int var_15 = 10948659924873325654ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)50885;
short var_20 = (short)-15145;
short var_21 = (short)1449;
unsigned int var_22 = 1900609830U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
