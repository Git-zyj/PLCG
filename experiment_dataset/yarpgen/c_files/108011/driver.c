#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16623584981267772892ULL;
unsigned long long int var_1 = 9968820082418186826ULL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)183;
unsigned char var_7 = (unsigned char)4;
unsigned short var_8 = (unsigned short)47394;
int zero = 0;
unsigned short var_10 = (unsigned short)11569;
unsigned char var_11 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
