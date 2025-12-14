#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
unsigned long long int var_2 = 6501970817805168553ULL;
unsigned int var_4 = 223521550U;
long long int var_9 = -8362338109749380817LL;
int zero = 0;
unsigned char var_11 = (unsigned char)63;
unsigned int var_12 = 119695275U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
