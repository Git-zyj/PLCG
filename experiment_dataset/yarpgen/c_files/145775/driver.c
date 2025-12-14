#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2635721791666354954LL;
signed char var_1 = (signed char)12;
short var_3 = (short)-19038;
signed char var_4 = (signed char)-37;
long long int var_5 = -1345456653164049726LL;
unsigned long long int var_6 = 7315185305189440360ULL;
short var_7 = (short)17406;
unsigned int var_8 = 2736301826U;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)148;
unsigned short var_13 = (unsigned short)33647;
unsigned long long int var_17 = 8494612811520859831ULL;
int var_18 = -1935015378;
unsigned short var_19 = (unsigned short)46030;
int zero = 0;
signed char var_20 = (signed char)16;
unsigned long long int var_21 = 14846944279457260792ULL;
unsigned char var_22 = (unsigned char)14;
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
