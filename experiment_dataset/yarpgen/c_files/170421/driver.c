#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
long long int var_3 = 1425474513681121771LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-15;
signed char var_8 = (signed char)46;
short var_9 = (short)-27912;
signed char var_10 = (signed char)-24;
int zero = 0;
unsigned char var_11 = (unsigned char)246;
short var_12 = (short)21510;
signed char var_13 = (signed char)-8;
signed char var_14 = (signed char)-7;
void init() {
}

void checksum() {
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
