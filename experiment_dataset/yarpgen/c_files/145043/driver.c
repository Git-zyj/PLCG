#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)35;
unsigned short var_2 = (unsigned short)33845;
unsigned long long int var_5 = 11860219985879019996ULL;
short var_6 = (short)21702;
short var_7 = (short)-15710;
long long int var_9 = -4696381860048061545LL;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)14;
unsigned short var_16 = (unsigned short)14840;
int zero = 0;
unsigned long long int var_18 = 6421307496733021825ULL;
unsigned char var_19 = (unsigned char)102;
unsigned short var_20 = (unsigned short)37933;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
