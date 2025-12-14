#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)241;
unsigned short var_2 = (unsigned short)19583;
short var_8 = (short)19734;
unsigned short var_10 = (unsigned short)23419;
long long int var_11 = 2848453519749357558LL;
unsigned char var_13 = (unsigned char)137;
signed char var_14 = (signed char)-83;
int zero = 0;
long long int var_15 = -4184392820031424009LL;
signed char var_16 = (signed char)-88;
void init() {
}

void checksum() {
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
