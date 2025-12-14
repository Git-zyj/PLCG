#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3959679263826042284LL;
unsigned long long int var_7 = 11857171937319855622ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)428;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 1284796854549588808LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
