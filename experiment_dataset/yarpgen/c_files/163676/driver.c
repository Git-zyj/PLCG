#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19881;
unsigned char var_6 = (unsigned char)128;
unsigned char var_8 = (unsigned char)211;
short var_9 = (short)-10011;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)19234;
long long int var_14 = 8578225235167889060LL;
int zero = 0;
int var_15 = 102046608;
unsigned long long int var_16 = 15995594987895597634ULL;
unsigned char var_17 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
