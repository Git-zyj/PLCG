#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2771802423U;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)50382;
unsigned int var_6 = 2723606104U;
signed char var_8 = (signed char)92;
short var_9 = (short)-11261;
int zero = 0;
unsigned int var_10 = 2735935966U;
int var_11 = -1716835768;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
