#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4220090009U;
unsigned int var_2 = 3078156980U;
long long int var_3 = 6508130802464842312LL;
int var_5 = -870267716;
unsigned long long int var_7 = 11244205556726804889ULL;
_Bool var_8 = (_Bool)0;
int var_11 = 1350109719;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 3449234600U;
unsigned int var_18 = 909410792U;
int var_19 = 1425457554;
long long int var_20 = 1151266227867612982LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
