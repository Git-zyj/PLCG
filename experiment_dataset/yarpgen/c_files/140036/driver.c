#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11536480117773938623ULL;
long long int var_11 = 6859450450875291343LL;
int var_13 = -1449265980;
long long int var_18 = 4912996611475138725LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)24;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)28;
unsigned long long int var_23 = 3751151632467666179ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
