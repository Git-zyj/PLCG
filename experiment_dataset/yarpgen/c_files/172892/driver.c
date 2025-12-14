#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 6693217570727604465ULL;
int var_16 = -108250937;
int zero = 0;
unsigned int var_19 = 330936076U;
short var_20 = (short)-18079;
unsigned int var_21 = 2688356225U;
unsigned long long int var_22 = 5146581918780672598ULL;
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
