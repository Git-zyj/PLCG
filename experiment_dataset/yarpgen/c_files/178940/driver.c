#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43825;
signed char var_1 = (signed char)1;
unsigned long long int var_2 = 9000256358372972245ULL;
signed char var_6 = (signed char)-41;
short var_7 = (short)21468;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1909592539U;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)72;
unsigned short var_13 = (unsigned short)41080;
unsigned long long int var_14 = 329469197241824088ULL;
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
