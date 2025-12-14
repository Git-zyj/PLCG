#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26522;
unsigned short var_2 = (unsigned short)63628;
int var_3 = -1024643835;
unsigned char var_5 = (unsigned char)73;
unsigned char var_9 = (unsigned char)66;
int zero = 0;
int var_11 = 757934614;
int var_12 = 919490626;
unsigned int var_13 = 492901395U;
unsigned short var_14 = (unsigned short)45408;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
