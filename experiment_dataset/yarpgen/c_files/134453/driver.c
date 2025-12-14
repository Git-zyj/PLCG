#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 298379974;
int var_2 = -249436170;
unsigned short var_3 = (unsigned short)20054;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1502784805U;
signed char var_11 = (signed char)-62;
unsigned short var_12 = (unsigned short)29035;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
