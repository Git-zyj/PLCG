#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1076821450014586452LL;
short var_2 = (short)15611;
long long int var_3 = 4760008992161803429LL;
unsigned char var_5 = (unsigned char)200;
unsigned short var_8 = (unsigned short)25461;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)1521;
int zero = 0;
long long int var_18 = 5332474451863933324LL;
short var_19 = (short)-17620;
void init() {
}

void checksum() {
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
