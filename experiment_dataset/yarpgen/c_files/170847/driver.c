#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
_Bool var_4 = (_Bool)1;
long long int var_6 = -6203867127397365548LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)1535;
int zero = 0;
unsigned short var_12 = (unsigned short)6663;
signed char var_13 = (signed char)47;
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
