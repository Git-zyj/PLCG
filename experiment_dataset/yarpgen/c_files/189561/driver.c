#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32428;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-101;
unsigned int var_7 = 1686788615U;
short var_8 = (short)-30017;
unsigned short var_9 = (unsigned short)19006;
_Bool var_10 = (_Bool)1;
long long int var_11 = 296601768175985824LL;
int zero = 0;
unsigned int var_13 = 3466864714U;
unsigned char var_14 = (unsigned char)122;
unsigned long long int var_15 = 13374838717649715221ULL;
unsigned char var_16 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
