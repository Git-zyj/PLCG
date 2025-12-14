#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 4038422931U;
unsigned long long int var_6 = 11085433878631126685ULL;
unsigned char var_8 = (unsigned char)57;
int zero = 0;
unsigned long long int var_10 = 18382816898347603130ULL;
long long int var_11 = 7867008023593076499LL;
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
