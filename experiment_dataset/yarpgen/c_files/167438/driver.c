#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11756411694515411846ULL;
long long int var_12 = 7705414793481108993LL;
unsigned long long int var_18 = 11930847034232412007ULL;
int zero = 0;
unsigned int var_19 = 3088820809U;
unsigned short var_20 = (unsigned short)38439;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 858352481U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
