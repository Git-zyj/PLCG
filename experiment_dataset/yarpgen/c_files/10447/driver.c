#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-74;
signed char var_4 = (signed char)-117;
unsigned int var_7 = 1595117121U;
unsigned int var_8 = 3223311641U;
int zero = 0;
unsigned int var_10 = 3372255740U;
signed char var_11 = (signed char)-1;
unsigned int var_12 = 2536255165U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
