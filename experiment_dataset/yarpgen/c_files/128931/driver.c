#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
signed char var_1 = (signed char)-92;
_Bool var_2 = (_Bool)0;
unsigned long long int var_8 = 8469358282320309173ULL;
unsigned char var_9 = (unsigned char)235;
int zero = 0;
int var_15 = -807196886;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-73;
void init() {
}

void checksum() {
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
