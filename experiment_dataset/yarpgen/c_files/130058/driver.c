#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28913;
unsigned long long int var_4 = 1665025070968614158ULL;
unsigned short var_5 = (unsigned short)3846;
short var_8 = (short)25767;
int zero = 0;
unsigned short var_16 = (unsigned short)2425;
unsigned int var_17 = 1135623447U;
unsigned long long int var_18 = 13827319010671191643ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
