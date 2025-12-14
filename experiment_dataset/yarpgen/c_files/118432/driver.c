#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8038278015019751732LL;
unsigned int var_7 = 1042576282U;
long long int var_8 = 2353333481128611168LL;
int zero = 0;
unsigned int var_10 = 3368179360U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3706895097U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
