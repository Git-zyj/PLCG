#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41946;
unsigned long long int var_8 = 6381926924776286754ULL;
unsigned int var_9 = 3266443556U;
_Bool var_12 = (_Bool)1;
short var_13 = (short)29777;
int var_15 = 1348996068;
short var_16 = (short)-7766;
int zero = 0;
signed char var_17 = (signed char)-106;
short var_18 = (short)28761;
int var_19 = -570083921;
unsigned short var_20 = (unsigned short)17442;
unsigned char var_21 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
