#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned short var_11 = (unsigned short)49048;
signed char var_16 = (signed char)74;
signed char var_17 = (signed char)-101;
unsigned long long int var_19 = 9342431572534735593ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2034482368U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
