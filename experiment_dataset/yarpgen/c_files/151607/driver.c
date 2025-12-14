#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5800;
_Bool var_3 = (_Bool)1;
int var_6 = 1777988106;
unsigned long long int var_7 = 10799531311538962463ULL;
signed char var_10 = (signed char)-66;
signed char var_13 = (signed char)-65;
int zero = 0;
unsigned short var_15 = (unsigned short)52053;
unsigned char var_16 = (unsigned char)236;
short var_17 = (short)-26191;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
