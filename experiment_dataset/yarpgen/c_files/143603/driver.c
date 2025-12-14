#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
unsigned int var_1 = 2962648845U;
int var_2 = -761029588;
int var_4 = 500738084;
short var_5 = (short)28412;
unsigned int var_8 = 1422155545U;
unsigned long long int var_9 = 2602282218527000000ULL;
int var_12 = -1969590728;
signed char var_14 = (signed char)50;
unsigned short var_16 = (unsigned short)53411;
int zero = 0;
signed char var_17 = (signed char)-32;
int var_18 = 1420839757;
signed char var_19 = (signed char)-14;
int var_20 = 508771365;
unsigned short var_21 = (unsigned short)33860;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
