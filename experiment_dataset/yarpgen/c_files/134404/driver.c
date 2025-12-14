#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_10 = 1047982741999927782LL;
_Bool var_13 = (_Bool)1;
unsigned int var_18 = 3020640548U;
int zero = 0;
long long int var_19 = -4681735008042228543LL;
unsigned char var_20 = (unsigned char)92;
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
