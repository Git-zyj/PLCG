#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1892003546U;
unsigned char var_3 = (unsigned char)85;
int var_5 = -1548063675;
signed char var_9 = (signed char)-6;
unsigned int var_11 = 2277325554U;
signed char var_12 = (signed char)34;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)8;
signed char var_21 = (signed char)118;
unsigned int var_22 = 1498585870U;
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
