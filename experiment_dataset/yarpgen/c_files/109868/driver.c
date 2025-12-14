#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)97;
unsigned int var_10 = 3757724006U;
long long int var_18 = 658535338386727974LL;
int zero = 0;
long long int var_20 = 8997726971150046416LL;
signed char var_21 = (signed char)-18;
short var_22 = (short)26124;
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
