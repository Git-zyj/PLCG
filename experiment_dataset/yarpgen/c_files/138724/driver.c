#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27240;
signed char var_4 = (signed char)-101;
unsigned char var_5 = (unsigned char)108;
int var_6 = -1628128361;
unsigned long long int var_10 = 11405337423641470705ULL;
unsigned short var_11 = (unsigned short)11379;
unsigned short var_12 = (unsigned short)54850;
short var_14 = (short)-6566;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)34318;
unsigned char var_17 = (unsigned char)62;
unsigned int var_18 = 3921443987U;
unsigned int var_19 = 2456623541U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
