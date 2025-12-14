#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
long long int var_4 = -5112136979967939902LL;
unsigned long long int var_6 = 13251971839794803110ULL;
long long int var_7 = -6648878269520195463LL;
unsigned int var_10 = 4212541254U;
short var_12 = (short)31580;
int zero = 0;
long long int var_14 = 6091371787661053152LL;
_Bool var_15 = (_Bool)0;
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
