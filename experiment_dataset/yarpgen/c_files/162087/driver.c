#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4709564401353341578LL;
unsigned int var_1 = 2436835439U;
int var_3 = -1450338381;
int zero = 0;
short var_18 = (short)23652;
unsigned short var_19 = (unsigned short)2806;
int var_20 = -936916905;
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
