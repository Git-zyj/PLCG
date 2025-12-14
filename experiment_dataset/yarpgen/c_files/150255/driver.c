#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
signed char var_3 = (signed char)49;
signed char var_4 = (signed char)101;
signed char var_5 = (signed char)63;
signed char var_6 = (signed char)18;
signed char var_8 = (signed char)82;
signed char var_10 = (signed char)1;
int zero = 0;
signed char var_11 = (signed char)-6;
signed char var_12 = (signed char)-106;
signed char var_13 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
