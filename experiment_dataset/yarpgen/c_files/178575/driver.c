#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17012;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-120;
unsigned char var_7 = (unsigned char)171;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_18 = 2791126339U;
int zero = 0;
unsigned long long int var_20 = 5531895038670362726ULL;
unsigned char var_21 = (unsigned char)24;
void init() {
}

void checksum() {
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
