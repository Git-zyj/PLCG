#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned int var_1 = 349377743U;
unsigned int var_3 = 3861210361U;
_Bool var_5 = (_Bool)1;
signed char var_10 = (signed char)-46;
int zero = 0;
signed char var_13 = (signed char)-20;
signed char var_14 = (signed char)127;
unsigned char var_15 = (unsigned char)204;
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
