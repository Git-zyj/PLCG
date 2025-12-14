#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)35685;
unsigned int var_4 = 1062764711U;
short var_6 = (short)-17969;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 17085228002076439931ULL;
int zero = 0;
unsigned int var_12 = 2527478408U;
int var_13 = 1309317388;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
