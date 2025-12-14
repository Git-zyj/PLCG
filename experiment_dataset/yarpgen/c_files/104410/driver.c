#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)29;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)109;
long long int var_8 = 6160049020486367607LL;
short var_11 = (short)-12811;
int zero = 0;
unsigned char var_16 = (unsigned char)31;
unsigned short var_17 = (unsigned short)64525;
void init() {
}

void checksum() {
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
