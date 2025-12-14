#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1588201793;
long long int var_4 = -6990214319310844342LL;
short var_5 = (short)23550;
signed char var_6 = (signed char)-44;
unsigned int var_7 = 2406490944U;
unsigned char var_13 = (unsigned char)186;
signed char var_14 = (signed char)70;
unsigned char var_17 = (unsigned char)31;
int zero = 0;
unsigned short var_20 = (unsigned short)21224;
short var_21 = (short)-7106;
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
