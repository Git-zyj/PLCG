#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
int var_2 = -427102980;
long long int var_6 = -2076791969811953799LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -7348795270212944424LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_17 = 147477740;
unsigned int var_18 = 444739069U;
long long int var_19 = -7933310824533645846LL;
unsigned char var_20 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
