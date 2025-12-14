#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8407605792336321581ULL;
unsigned long long int var_3 = 13955603476042032291ULL;
int var_4 = 1475217220;
unsigned long long int var_6 = 18427917969650398607ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)42;
int zero = 0;
unsigned char var_11 = (unsigned char)232;
long long int var_12 = -4974890037984197534LL;
short var_13 = (short)-16056;
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
