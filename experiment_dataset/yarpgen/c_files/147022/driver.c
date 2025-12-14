#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1308046847183506083LL;
_Bool var_1 = (_Bool)0;
int var_2 = -143823238;
short var_3 = (short)30512;
short var_4 = (short)1461;
unsigned int var_5 = 239287046U;
long long int var_6 = -1631702375762539546LL;
long long int var_7 = -1428260747306417752LL;
signed char var_8 = (signed char)-46;
signed char var_9 = (signed char)45;
signed char var_10 = (signed char)15;
int zero = 0;
unsigned char var_11 = (unsigned char)109;
signed char var_12 = (signed char)-36;
signed char var_13 = (signed char)14;
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
