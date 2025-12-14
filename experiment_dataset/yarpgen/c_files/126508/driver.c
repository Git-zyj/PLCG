#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2055269538;
unsigned char var_1 = (unsigned char)97;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 9260056884110692796ULL;
void init() {
}

void checksum() {
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
