#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1856554730;
short var_2 = (short)19897;
long long int var_3 = 433073470824801155LL;
unsigned int var_4 = 2267996819U;
short var_6 = (short)20883;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_12 = -271996857;
unsigned long long int var_13 = 6851227450802147329ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
