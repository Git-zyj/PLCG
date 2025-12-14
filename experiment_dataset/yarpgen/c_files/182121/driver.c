#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)144;
unsigned long long int var_3 = 5160798455407695039ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)127;
int zero = 0;
unsigned short var_18 = (unsigned short)19756;
short var_19 = (short)12147;
int var_20 = 314982113;
int var_21 = -2137236307;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
