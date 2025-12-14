#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9346909590149975246ULL;
unsigned int var_1 = 3295723717U;
unsigned int var_4 = 1173368461U;
int var_6 = 1460877809;
signed char var_7 = (signed char)-74;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)30367;
_Bool var_14 = (_Bool)1;
short var_15 = (short)9400;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
