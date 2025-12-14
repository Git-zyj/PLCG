#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)230;
unsigned char var_3 = (unsigned char)127;
long long int var_5 = 8761848918474669550LL;
unsigned int var_6 = 1305162581U;
unsigned char var_7 = (unsigned char)167;
unsigned char var_8 = (unsigned char)19;
_Bool var_11 = (_Bool)1;
long long int var_12 = 6622023046144854479LL;
int zero = 0;
unsigned char var_13 = (unsigned char)28;
short var_14 = (short)-1224;
void init() {
}

void checksum() {
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
