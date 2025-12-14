#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)108;
unsigned char var_19 = (unsigned char)248;
int zero = 0;
signed char var_20 = (signed char)-71;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3553154922U;
signed char var_23 = (signed char)98;
unsigned int var_24 = 1824405270U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
