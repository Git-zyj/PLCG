#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16320239125641471820ULL;
_Bool var_6 = (_Bool)1;
short var_14 = (short)-11756;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)18;
unsigned long long int var_21 = 17702951558224481848ULL;
_Bool var_22 = (_Bool)1;
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
