#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = -4828828585531642631LL;
unsigned short var_17 = (unsigned short)20477;
int var_19 = -2131028761;
int zero = 0;
long long int var_20 = -3338045635919525640LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 18434621305517464993ULL;
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
