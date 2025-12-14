#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19292;
signed char var_1 = (signed char)-102;
unsigned long long int var_3 = 11671937523302659644ULL;
short var_4 = (short)-32507;
_Bool var_5 = (_Bool)1;
int zero = 0;
long long int var_11 = 1401347112792528244LL;
unsigned long long int var_12 = 2912184779627089269ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
