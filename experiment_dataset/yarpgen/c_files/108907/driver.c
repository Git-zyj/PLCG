#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3701899447U;
signed char var_5 = (signed char)12;
short var_9 = (short)-19198;
int zero = 0;
int var_10 = -1644260120;
unsigned short var_11 = (unsigned short)12716;
int var_12 = 31028818;
unsigned long long int var_13 = 2164388183652472395ULL;
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
