#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
short var_2 = (short)-14641;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-13161;
int var_7 = -1466996256;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 4213099074U;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
