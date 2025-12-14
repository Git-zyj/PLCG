#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 357895407;
unsigned int var_3 = 633259503U;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2076801110U;
_Bool var_8 = (_Bool)1;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-12697;
unsigned long long int var_15 = 3303209360281423586ULL;
unsigned char var_16 = (unsigned char)48;
unsigned long long int var_18 = 6957161945369647541ULL;
int zero = 0;
unsigned int var_19 = 133272681U;
unsigned short var_20 = (unsigned short)12386;
short var_21 = (short)-3098;
void init() {
}

void checksum() {
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
