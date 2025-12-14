#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)72;
_Bool var_4 = (_Bool)0;
int var_5 = -1715998487;
unsigned short var_9 = (unsigned short)54578;
int zero = 0;
unsigned int var_10 = 3405988075U;
unsigned int var_11 = 768309413U;
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
