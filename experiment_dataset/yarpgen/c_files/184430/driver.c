#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15257;
_Bool var_4 = (_Bool)1;
int var_14 = -804997668;
int var_15 = -842777243;
int zero = 0;
unsigned long long int var_17 = 2596501645742975029ULL;
int var_18 = 821660279;
unsigned long long int var_19 = 8346625142826789677ULL;
signed char var_20 = (signed char)-33;
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
