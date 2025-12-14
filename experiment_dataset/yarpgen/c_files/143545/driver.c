#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)107;
_Bool var_3 = (_Bool)0;
unsigned int var_14 = 4167382362U;
int zero = 0;
unsigned char var_16 = (unsigned char)25;
unsigned char var_17 = (unsigned char)41;
int var_18 = 860918121;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
