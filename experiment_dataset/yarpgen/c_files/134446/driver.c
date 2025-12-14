#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 644524206;
short var_7 = (short)31752;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2596468294U;
int zero = 0;
short var_10 = (short)1733;
unsigned short var_11 = (unsigned short)64251;
unsigned long long int var_12 = 4493797332093987122ULL;
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
