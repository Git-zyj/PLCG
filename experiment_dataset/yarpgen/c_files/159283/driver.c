#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4147341599897608642LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 6978294921385386072ULL;
signed char var_3 = (signed char)36;
short var_4 = (short)-15690;
unsigned long long int var_6 = 5494182770530870835ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)19931;
unsigned short var_15 = (unsigned short)51812;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
