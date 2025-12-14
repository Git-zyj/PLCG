#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -3009799353988377643LL;
signed char var_13 = (signed char)-46;
signed char var_14 = (signed char)-23;
unsigned char var_16 = (unsigned char)184;
int zero = 0;
unsigned long long int var_20 = 9059718490935179305ULL;
short var_21 = (short)-30128;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)52408;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
