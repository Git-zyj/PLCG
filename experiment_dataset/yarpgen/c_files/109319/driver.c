#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8527853599043603176ULL;
unsigned long long int var_1 = 79975994502017847ULL;
unsigned long long int var_5 = 7719126861641979751ULL;
_Bool var_6 = (_Bool)1;
int var_8 = 1008283939;
unsigned char var_9 = (unsigned char)167;
int zero = 0;
int var_13 = 672906918;
signed char var_14 = (signed char)51;
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
