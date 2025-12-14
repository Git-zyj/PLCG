#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14430729949398460518ULL;
short var_7 = (short)16074;
unsigned int var_11 = 2761070374U;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 2715131205U;
signed char var_16 = (signed char)-123;
int zero = 0;
unsigned char var_20 = (unsigned char)41;
unsigned char var_21 = (unsigned char)206;
unsigned char var_22 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
