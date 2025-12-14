#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2061270258;
unsigned short var_4 = (unsigned short)59657;
unsigned short var_7 = (unsigned short)40198;
unsigned int var_8 = 3627986876U;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_15 = -1376945322744967121LL;
unsigned short var_16 = (unsigned short)36285;
unsigned short var_17 = (unsigned short)59006;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
