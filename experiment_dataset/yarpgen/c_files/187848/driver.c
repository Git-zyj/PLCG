#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1075290498595154588LL;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int var_19 = -719437330;
int zero = 0;
int var_20 = -975082119;
unsigned int var_21 = 3278696567U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
