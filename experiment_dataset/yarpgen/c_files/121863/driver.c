#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1909971598;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 351114025U;
unsigned char var_4 = (unsigned char)117;
unsigned char var_5 = (unsigned char)148;
unsigned int var_6 = 2554594684U;
short var_8 = (short)15874;
int var_9 = -576689739;
int zero = 0;
unsigned char var_18 = (unsigned char)246;
unsigned long long int var_19 = 8131136590895151295ULL;
int var_20 = 881431438;
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
