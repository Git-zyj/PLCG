#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)0;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)2;
unsigned char var_8 = (unsigned char)105;
short var_9 = (short)8850;
int zero = 0;
unsigned int var_14 = 3202669831U;
unsigned char var_15 = (unsigned char)228;
int var_16 = -784810361;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
