#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3738;
unsigned short var_5 = (unsigned short)12262;
long long int var_6 = -4615343254095103759LL;
long long int var_8 = 7862682620572830835LL;
unsigned char var_9 = (unsigned char)135;
_Bool var_10 = (_Bool)1;
long long int var_12 = 8770610444089364527LL;
int zero = 0;
long long int var_13 = 6838971580933274243LL;
int var_14 = -814578140;
unsigned int var_15 = 3574806227U;
unsigned char var_16 = (unsigned char)201;
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
