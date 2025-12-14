#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
int var_2 = 115994255;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)28494;
unsigned short var_12 = (unsigned short)45301;
int zero = 0;
unsigned long long int var_13 = 478365704225243201ULL;
unsigned short var_14 = (unsigned short)27844;
unsigned int var_15 = 3345572449U;
unsigned char var_16 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
