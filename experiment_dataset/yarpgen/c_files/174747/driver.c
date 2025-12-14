#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7938331364434896345LL;
long long int var_4 = 5185478585087247548LL;
unsigned short var_8 = (unsigned short)62226;
unsigned short var_10 = (unsigned short)43403;
short var_11 = (short)5704;
_Bool var_16 = (_Bool)0;
long long int var_17 = -36206453359011638LL;
signed char var_18 = (signed char)6;
int zero = 0;
unsigned short var_19 = (unsigned short)23701;
unsigned short var_20 = (unsigned short)36252;
void init() {
}

void checksum() {
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
