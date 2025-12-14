#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4767008852344496653LL;
unsigned short var_18 = (unsigned short)40552;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2255304913U;
unsigned short var_21 = (unsigned short)61105;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
