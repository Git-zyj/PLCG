#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15359251980519866794ULL;
unsigned short var_6 = (unsigned short)46555;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 8003920002323434273ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)23;
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
