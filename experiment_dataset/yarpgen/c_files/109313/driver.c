#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26729;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2503679068U;
int var_4 = -1674318124;
int var_6 = -1843794474;
unsigned int var_8 = 1285409620U;
signed char var_9 = (signed char)93;
int zero = 0;
signed char var_10 = (signed char)-124;
int var_11 = -1277882415;
signed char var_12 = (signed char)72;
short var_13 = (short)-8451;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
