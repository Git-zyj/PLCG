#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39655;
unsigned short var_4 = (unsigned short)17164;
unsigned char var_7 = (unsigned char)102;
short var_8 = (short)11946;
int var_14 = -172698825;
unsigned char var_15 = (unsigned char)253;
int zero = 0;
unsigned short var_19 = (unsigned short)43829;
unsigned short var_20 = (unsigned short)44866;
long long int var_21 = 3725054048687887366LL;
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
