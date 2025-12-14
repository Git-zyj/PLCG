#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 473708198U;
unsigned int var_2 = 191623585U;
unsigned short var_5 = (unsigned short)59058;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_12 = (short)-24464;
unsigned long long int var_13 = 13570048348850396437ULL;
_Bool var_14 = (_Bool)1;
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
