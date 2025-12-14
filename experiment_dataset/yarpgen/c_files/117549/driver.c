#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 10150753482484050394ULL;
unsigned long long int var_17 = 8573172691273588640ULL;
unsigned char var_18 = (unsigned char)179;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)13243;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
