#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16473;
unsigned short var_2 = (unsigned short)11639;
unsigned char var_3 = (unsigned char)247;
long long int var_5 = 2334220975748838853LL;
signed char var_6 = (signed char)-115;
unsigned char var_7 = (unsigned char)17;
unsigned short var_8 = (unsigned short)13136;
int var_11 = -13657054;
unsigned short var_14 = (unsigned short)37912;
long long int var_16 = 4229312031384094308LL;
int zero = 0;
signed char var_20 = (signed char)98;
unsigned long long int var_21 = 11014615961175971528ULL;
void init() {
}

void checksum() {
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
