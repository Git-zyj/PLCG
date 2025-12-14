#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
unsigned char var_1 = (unsigned char)247;
int var_4 = 326154262;
short var_7 = (short)18733;
int zero = 0;
long long int var_10 = -1590462381556957114LL;
unsigned int var_11 = 3197433165U;
unsigned long long int var_12 = 10699543542833991539ULL;
signed char var_13 = (signed char)-4;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
