#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
signed char var_3 = (signed char)64;
int var_6 = 359741799;
signed char var_9 = (signed char)53;
signed char var_11 = (signed char)74;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 2111904698;
void init() {
}

void checksum() {
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
