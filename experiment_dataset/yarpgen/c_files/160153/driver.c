#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18346;
short var_1 = (short)209;
unsigned char var_2 = (unsigned char)230;
unsigned char var_3 = (unsigned char)68;
long long int var_4 = -5458370967307659636LL;
long long int var_11 = 5078700169274526217LL;
signed char var_12 = (signed char)-4;
short var_13 = (short)16309;
signed char var_15 = (signed char)21;
int zero = 0;
unsigned int var_17 = 1846816612U;
signed char var_18 = (signed char)30;
short var_19 = (short)6966;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
