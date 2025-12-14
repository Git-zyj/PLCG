#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25086;
unsigned long long int var_7 = 4548337661629812507ULL;
unsigned int var_8 = 3237719858U;
unsigned char var_10 = (unsigned char)99;
int zero = 0;
unsigned int var_11 = 4275650123U;
unsigned long long int var_12 = 16016742279368560890ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
