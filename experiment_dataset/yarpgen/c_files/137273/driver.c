#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)216;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 15422265031625864539ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8163285565869099875ULL;
unsigned char var_18 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
