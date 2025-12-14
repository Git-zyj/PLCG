#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2273398718054475317ULL;
unsigned char var_1 = (unsigned char)6;
int var_2 = 118407553;
_Bool var_3 = (_Bool)1;
long long int var_4 = -5264283454825407630LL;
unsigned char var_6 = (unsigned char)29;
unsigned char var_8 = (unsigned char)153;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
unsigned char var_13 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
