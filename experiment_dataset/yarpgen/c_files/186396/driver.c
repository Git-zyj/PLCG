#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -705916704;
unsigned int var_5 = 878890342U;
unsigned int var_7 = 2299285661U;
_Bool var_8 = (_Bool)1;
int var_9 = -42718981;
unsigned char var_13 = (unsigned char)35;
int zero = 0;
unsigned char var_14 = (unsigned char)108;
signed char var_15 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
