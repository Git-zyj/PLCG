#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21549;
unsigned long long int var_4 = 353450918569517480ULL;
long long int var_5 = -8138984901941700851LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)28294;
short var_16 = (short)-16798;
int zero = 0;
int var_18 = 1285637148;
signed char var_19 = (signed char)0;
unsigned short var_20 = (unsigned short)47127;
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
