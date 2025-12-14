#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-25;
signed char var_4 = (signed char)106;
short var_10 = (short)-31315;
unsigned long long int var_16 = 9434338947305552222ULL;
signed char var_17 = (signed char)65;
int zero = 0;
unsigned int var_18 = 2455099797U;
unsigned short var_19 = (unsigned short)9858;
_Bool var_20 = (_Bool)0;
long long int var_21 = -1484752707262196825LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
