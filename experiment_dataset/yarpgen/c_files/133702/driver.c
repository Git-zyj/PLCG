#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1017982844U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-10663;
unsigned int var_7 = 3959012086U;
int var_9 = -2064390637;
unsigned char var_10 = (unsigned char)211;
unsigned char var_11 = (unsigned char)253;
short var_12 = (short)21253;
short var_16 = (short)-27724;
short var_17 = (short)-23657;
int zero = 0;
unsigned char var_19 = (unsigned char)107;
unsigned char var_20 = (unsigned char)9;
unsigned short var_21 = (unsigned short)32211;
unsigned char var_22 = (unsigned char)183;
unsigned long long int var_23 = 12284509311236425466ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
