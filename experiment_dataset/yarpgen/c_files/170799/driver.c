#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -737887887;
signed char var_4 = (signed char)2;
int zero = 0;
unsigned long long int var_12 = 3749796393077325191ULL;
long long int var_13 = 3507514065218103473LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
