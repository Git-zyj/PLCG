#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)61;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)109;
signed char var_12 = (signed char)41;
unsigned int var_18 = 4011107438U;
long long int var_19 = 8568574764078371920LL;
int zero = 0;
unsigned char var_20 = (unsigned char)86;
signed char var_21 = (signed char)-74;
int var_22 = 75261081;
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
