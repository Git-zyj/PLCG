#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
unsigned char var_1 = (unsigned char)41;
unsigned int var_4 = 1612407626U;
signed char var_7 = (signed char)-70;
unsigned int var_9 = 1811251006U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = 6219045333551218513LL;
int var_13 = 1765145653;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
