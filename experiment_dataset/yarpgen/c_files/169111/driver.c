#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17493817413495981393ULL;
signed char var_1 = (signed char)-21;
signed char var_2 = (signed char)-115;
int var_3 = -679538702;
short var_4 = (short)18739;
unsigned short var_8 = (unsigned short)24133;
unsigned char var_9 = (unsigned char)144;
unsigned char var_11 = (unsigned char)153;
int zero = 0;
long long int var_13 = -6486787356598255837LL;
unsigned short var_14 = (unsigned short)59750;
unsigned int var_15 = 1507780668U;
long long int var_16 = -526890504068746390LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
