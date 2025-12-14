#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15316;
short var_1 = (short)26971;
int var_2 = -391088113;
unsigned long long int var_3 = 6921044180060676178ULL;
signed char var_4 = (signed char)57;
int var_5 = 136190073;
unsigned long long int var_6 = 11634338864811900462ULL;
unsigned long long int var_7 = 2872986389918897317ULL;
unsigned short var_8 = (unsigned short)11921;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = 1401948679;
unsigned short var_13 = (unsigned short)39976;
unsigned short var_14 = (unsigned short)3898;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
