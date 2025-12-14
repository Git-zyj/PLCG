#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)15948;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)591;
unsigned int var_14 = 1275413999U;
unsigned char var_15 = (unsigned char)230;
int zero = 0;
unsigned long long int var_17 = 10704878789921348404ULL;
unsigned int var_18 = 3472873069U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
