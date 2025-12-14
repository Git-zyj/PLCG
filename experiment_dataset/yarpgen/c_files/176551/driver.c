#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11002;
int var_2 = -1637080025;
int var_3 = -1441899875;
long long int var_4 = -8092292694535132162LL;
signed char var_9 = (signed char)-63;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 1277710164;
signed char var_12 = (signed char)95;
short var_13 = (short)-11139;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
