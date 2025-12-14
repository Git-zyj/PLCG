#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-92;
short var_16 = (short)32373;
unsigned long long int var_19 = 8114204980187227388ULL;
int zero = 0;
unsigned long long int var_20 = 2883838373966606630ULL;
unsigned int var_21 = 1372138559U;
int var_22 = 412446290;
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
