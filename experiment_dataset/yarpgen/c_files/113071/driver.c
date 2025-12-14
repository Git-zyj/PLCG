#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1343274610;
signed char var_2 = (signed char)-16;
int var_3 = 1371886570;
unsigned int var_4 = 3666237015U;
unsigned short var_7 = (unsigned short)1257;
short var_9 = (short)-19175;
int zero = 0;
long long int var_11 = -5990749203487174544LL;
unsigned int var_12 = 329757354U;
int var_13 = -1643759451;
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
