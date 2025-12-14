#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4197;
unsigned short var_1 = (unsigned short)52004;
signed char var_2 = (signed char)-60;
short var_3 = (short)9738;
short var_4 = (short)24347;
long long int var_6 = 8866923320422512494LL;
unsigned short var_7 = (unsigned short)2396;
unsigned short var_10 = (unsigned short)58726;
unsigned short var_13 = (unsigned short)10629;
short var_14 = (short)-31859;
signed char var_15 = (signed char)119;
int zero = 0;
unsigned short var_16 = (unsigned short)16939;
short var_17 = (short)-27028;
long long int var_18 = -9068703675103670245LL;
unsigned short var_19 = (unsigned short)55472;
unsigned short var_20 = (unsigned short)2213;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
