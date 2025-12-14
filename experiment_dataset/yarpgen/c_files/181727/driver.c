#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4578579205647957980ULL;
signed char var_1 = (signed char)32;
signed char var_6 = (signed char)90;
signed char var_9 = (signed char)-40;
unsigned int var_10 = 2448080058U;
int var_13 = 74069963;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)37;
signed char var_16 = (signed char)115;
signed char var_17 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
