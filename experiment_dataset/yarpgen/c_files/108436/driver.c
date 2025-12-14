#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3578592174U;
unsigned char var_15 = (unsigned char)177;
unsigned long long int var_16 = 4080535524815209467ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12513697581869370977ULL;
unsigned int var_22 = 4065810098U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
