#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3862728081744086590LL;
unsigned short var_6 = (unsigned short)25344;
unsigned int var_11 = 3387312561U;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-25162;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
