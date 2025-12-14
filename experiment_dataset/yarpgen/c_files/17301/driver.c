#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3575837559U;
int var_8 = 1986024099;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)57;
unsigned int var_15 = 120336807U;
int zero = 0;
unsigned long long int var_18 = 3824812426312215032ULL;
short var_19 = (short)13026;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
