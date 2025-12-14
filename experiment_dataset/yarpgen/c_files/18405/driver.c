#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42762;
short var_3 = (short)5171;
unsigned long long int var_12 = 4972512081216785613ULL;
int var_18 = 297118832;
unsigned long long int var_19 = 4905944802547520926ULL;
int zero = 0;
long long int var_20 = -2286327418522031864LL;
unsigned char var_21 = (unsigned char)179;
unsigned char var_22 = (unsigned char)246;
unsigned int var_23 = 545983963U;
void init() {
}

void checksum() {
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
