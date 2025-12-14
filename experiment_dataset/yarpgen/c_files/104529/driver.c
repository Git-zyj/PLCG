#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
unsigned char var_2 = (unsigned char)88;
signed char var_4 = (signed char)-59;
unsigned int var_5 = 1814596892U;
unsigned char var_6 = (unsigned char)102;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-29;
unsigned char var_11 = (unsigned char)33;
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
