#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 238771964;
int var_1 = 319151594;
short var_9 = (short)16818;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2113036444U;
unsigned char var_20 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
