#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16734823937325277050ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-111;
int var_12 = 370373959;
int zero = 0;
unsigned int var_16 = 3025129821U;
signed char var_17 = (signed char)-88;
void init() {
}

void checksum() {
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
