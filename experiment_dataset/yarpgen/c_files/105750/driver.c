#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -633904132;
unsigned int var_6 = 20889028U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1622110757U;
short var_10 = (short)4909;
unsigned long long int var_11 = 12376558527408502907ULL;
unsigned long long int var_12 = 13303839233136756077ULL;
int zero = 0;
long long int var_14 = -2035919582213151502LL;
_Bool var_15 = (_Bool)1;
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
