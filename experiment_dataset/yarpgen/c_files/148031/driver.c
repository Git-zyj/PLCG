#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5549986226172388426ULL;
signed char var_4 = (signed char)-88;
unsigned long long int var_7 = 15167627043852708622ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 10281957262348380728ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)64;
void init() {
}

void checksum() {
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
