#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_15 = (unsigned char)209;
unsigned int var_18 = 495231381U;
int zero = 0;
signed char var_20 = (signed char)-3;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2311247712U;
short var_23 = (short)-6732;
unsigned int var_24 = 224976663U;
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
