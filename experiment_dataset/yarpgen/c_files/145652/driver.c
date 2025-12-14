#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3802591860U;
unsigned char var_3 = (unsigned char)160;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)104;
unsigned char var_9 = (unsigned char)95;
int zero = 0;
int var_10 = 1118807227;
unsigned int var_11 = 900968500U;
signed char var_12 = (signed char)102;
unsigned int var_13 = 4016451019U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
