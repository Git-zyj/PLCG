#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60514;
short var_2 = (short)23790;
unsigned char var_4 = (unsigned char)239;
long long int var_7 = 7560847711591098854LL;
long long int var_11 = 6285571050134190362LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -2115505270;
unsigned char var_14 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
