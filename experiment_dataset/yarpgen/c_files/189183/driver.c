#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 45202582;
unsigned char var_1 = (unsigned char)82;
int var_3 = 1090341696;
unsigned int var_8 = 2619822819U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2761111648U;
int zero = 0;
unsigned long long int var_11 = 4025347923997635401ULL;
unsigned short var_12 = (unsigned short)39235;
unsigned long long int var_13 = 17692364251783164625ULL;
unsigned long long int var_14 = 5525305274933591487ULL;
unsigned long long int var_15 = 11276402231748368452ULL;
int var_16 = -985451112;
unsigned char var_17 = (unsigned char)119;
unsigned char var_18 = (unsigned char)197;
unsigned long long int var_19 = 1397785637577154618ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
