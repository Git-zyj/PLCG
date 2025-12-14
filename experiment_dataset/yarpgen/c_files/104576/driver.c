#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)106;
signed char var_3 = (signed char)53;
signed char var_4 = (signed char)86;
signed char var_6 = (signed char)-45;
signed char var_10 = (signed char)-19;
int zero = 0;
signed char var_13 = (signed char)13;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2379576325U;
signed char var_16 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
