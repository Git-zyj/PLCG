#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
unsigned char var_2 = (unsigned char)224;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 7704534710486356444ULL;
int zero = 0;
unsigned long long int var_13 = 2664756902336903160ULL;
signed char var_14 = (signed char)-64;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
