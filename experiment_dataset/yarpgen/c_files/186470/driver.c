#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)105;
unsigned long long int var_3 = 17967882462396189555ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)35232;
unsigned char var_8 = (unsigned char)29;
unsigned char var_12 = (unsigned char)28;
int zero = 0;
long long int var_13 = 2413050200854285486LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-11036;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
