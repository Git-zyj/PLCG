#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)89;
unsigned long long int var_12 = 5613967833071277741ULL;
unsigned char var_13 = (unsigned char)51;
unsigned long long int var_19 = 14092221998217018728ULL;
int zero = 0;
int var_20 = 216336263;
int var_21 = 1062158881;
_Bool var_22 = (_Bool)1;
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
