#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
long long int var_1 = -7931266633034145834LL;
long long int var_2 = 6634016644282403325LL;
int var_3 = -1168319706;
_Bool var_4 = (_Bool)1;
unsigned short var_11 = (unsigned short)20239;
int zero = 0;
unsigned long long int var_13 = 1827688915973026938ULL;
int var_14 = 1085309727;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
