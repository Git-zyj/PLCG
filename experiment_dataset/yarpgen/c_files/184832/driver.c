#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)46844;
unsigned char var_5 = (unsigned char)39;
unsigned char var_7 = (unsigned char)164;
int var_8 = 800268103;
unsigned char var_9 = (unsigned char)16;
signed char var_10 = (signed char)62;
unsigned char var_12 = (unsigned char)74;
unsigned int var_14 = 1376648U;
int zero = 0;
unsigned int var_17 = 154660856U;
unsigned int var_18 = 4045104799U;
short var_19 = (short)19258;
unsigned short var_20 = (unsigned short)38247;
void init() {
}

void checksum() {
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
