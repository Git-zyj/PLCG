#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61539;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-24317;
int zero = 0;
unsigned long long int var_17 = 3909982732293556311ULL;
unsigned char var_18 = (unsigned char)124;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)26;
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
