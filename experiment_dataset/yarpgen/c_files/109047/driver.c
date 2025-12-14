#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
signed char var_2 = (signed char)5;
short var_3 = (short)-21289;
unsigned short var_4 = (unsigned short)65152;
unsigned long long int var_5 = 13493383195710717413ULL;
signed char var_18 = (signed char)73;
int zero = 0;
unsigned int var_19 = 4073119399U;
unsigned short var_20 = (unsigned short)48195;
int var_21 = 33758044;
unsigned char var_22 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
