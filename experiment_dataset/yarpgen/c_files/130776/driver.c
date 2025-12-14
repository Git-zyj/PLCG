#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_9 = (unsigned short)63902;
unsigned char var_10 = (unsigned char)77;
unsigned short var_11 = (unsigned short)5264;
unsigned long long int var_13 = 1016187116505726421ULL;
unsigned short var_14 = (unsigned short)44833;
unsigned char var_16 = (unsigned char)6;
short var_17 = (short)-15075;
int zero = 0;
long long int var_18 = -7075019298955201997LL;
short var_19 = (short)-24995;
unsigned long long int var_20 = 8968874021234610089ULL;
void init() {
}

void checksum() {
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
