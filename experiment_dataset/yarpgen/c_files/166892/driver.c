#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)47;
unsigned long long int var_9 = 1679105138002647643ULL;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-14;
unsigned long long int var_13 = 929174589997357536ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)47789;
unsigned long long int var_15 = 8237432327158843617ULL;
unsigned short var_16 = (unsigned short)54941;
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
