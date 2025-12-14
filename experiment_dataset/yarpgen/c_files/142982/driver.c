#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1517896262;
unsigned short var_5 = (unsigned short)65060;
unsigned int var_9 = 110048476U;
_Bool var_12 = (_Bool)1;
int var_16 = 1533243536;
int zero = 0;
int var_18 = 1333127394;
short var_19 = (short)-21352;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
