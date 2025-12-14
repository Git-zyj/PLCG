#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5640;
unsigned long long int var_7 = 6541540853449872392ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 2038534529;
short var_12 = (short)8141;
int zero = 0;
short var_13 = (short)15253;
signed char var_14 = (signed char)-56;
void init() {
}

void checksum() {
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
