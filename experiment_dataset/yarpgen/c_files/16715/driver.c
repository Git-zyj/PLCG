#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)30081;
unsigned int var_11 = 1160233721U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4258342827U;
int zero = 0;
unsigned long long int var_15 = 985284408921709546ULL;
unsigned long long int var_16 = 115211709802629821ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
