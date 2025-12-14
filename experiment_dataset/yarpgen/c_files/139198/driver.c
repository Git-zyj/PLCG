#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4786654270998742733LL;
unsigned char var_8 = (unsigned char)148;
unsigned int var_9 = 1185432818U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10469102156017394940ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
