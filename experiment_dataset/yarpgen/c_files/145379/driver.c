#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6929674298595207231ULL;
short var_1 = (short)22949;
unsigned short var_2 = (unsigned short)5095;
unsigned long long int var_3 = 18365910373105238409ULL;
int var_5 = -378090115;
unsigned short var_7 = (unsigned short)64153;
signed char var_8 = (signed char)-23;
int zero = 0;
signed char var_10 = (signed char)-69;
long long int var_11 = 2161194941285214635LL;
short var_12 = (short)-10124;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
