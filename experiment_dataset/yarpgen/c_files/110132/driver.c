#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18792;
signed char var_3 = (signed char)16;
long long int var_4 = -421161205090748799LL;
short var_5 = (short)4163;
int var_6 = -757612364;
unsigned char var_9 = (unsigned char)100;
unsigned char var_10 = (unsigned char)126;
int var_11 = 1821171600;
unsigned short var_12 = (unsigned short)18062;
int zero = 0;
short var_14 = (short)5547;
long long int var_15 = -3402084775725082056LL;
unsigned short var_16 = (unsigned short)14190;
void init() {
}

void checksum() {
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
