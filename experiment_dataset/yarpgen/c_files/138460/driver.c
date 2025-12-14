#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned long long int var_1 = 15025461936473314338ULL;
_Bool var_2 = (_Bool)0;
short var_7 = (short)-23367;
int var_8 = -49832960;
int zero = 0;
long long int var_15 = -6267331324924460199LL;
unsigned short var_16 = (unsigned short)39343;
long long int var_17 = 1984670532682415373LL;
unsigned char var_18 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
