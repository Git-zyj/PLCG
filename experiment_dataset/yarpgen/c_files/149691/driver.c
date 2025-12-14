#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 829226151231063584ULL;
short var_3 = (short)-24371;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_14 = -640157470;
unsigned short var_15 = (unsigned short)64384;
_Bool var_16 = (_Bool)0;
int var_17 = 1200589559;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
