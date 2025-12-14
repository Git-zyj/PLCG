#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)234;
unsigned long long int var_2 = 16445992508064488019ULL;
unsigned char var_4 = (unsigned char)135;
signed char var_8 = (signed char)-79;
int var_9 = -1392005125;
int zero = 0;
signed char var_11 = (signed char)41;
unsigned int var_12 = 1419445365U;
unsigned char var_13 = (unsigned char)212;
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
