#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1198502580161042169LL;
_Bool var_9 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 34915784U;
unsigned int var_18 = 452049620U;
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
