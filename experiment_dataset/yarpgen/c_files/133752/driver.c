#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3346155614U;
unsigned long long int var_2 = 15777232944989493579ULL;
_Bool var_4 = (_Bool)1;
short var_7 = (short)15538;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-52;
unsigned char var_10 = (unsigned char)61;
short var_11 = (short)13430;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
