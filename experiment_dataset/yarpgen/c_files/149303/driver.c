#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1930652695;
int var_2 = -469750585;
int var_3 = 843812742;
int var_4 = -1143725964;
int var_5 = 1220801353;
short var_7 = (short)-1762;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = 3649929846233934556LL;
short var_11 = (short)-25923;
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
