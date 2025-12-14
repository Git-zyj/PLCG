#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
signed char var_14 = (signed char)101;
signed char var_16 = (signed char)-11;
int zero = 0;
signed char var_19 = (signed char)-51;
signed char var_20 = (signed char)-25;
signed char var_21 = (signed char)-102;
signed char var_22 = (signed char)53;
signed char var_23 = (signed char)6;
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
