#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7377743402047516867LL;
signed char var_4 = (signed char)-63;
long long int var_13 = 8479329267258053009LL;
unsigned int var_14 = 1540235711U;
short var_15 = (short)-32118;
int zero = 0;
signed char var_17 = (signed char)-13;
unsigned int var_18 = 452149826U;
unsigned short var_19 = (unsigned short)7739;
signed char var_20 = (signed char)103;
void init() {
}

void checksum() {
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
