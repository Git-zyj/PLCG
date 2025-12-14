#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 920791916305297538LL;
unsigned long long int var_4 = 14325042923327610650ULL;
unsigned char var_9 = (unsigned char)106;
signed char var_11 = (signed char)-111;
long long int var_13 = -7165096889614748844LL;
unsigned int var_14 = 997443986U;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-125;
unsigned int var_18 = 1939429927U;
unsigned int var_19 = 1776480688U;
unsigned int var_20 = 1811313318U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
