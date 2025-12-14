#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23090;
unsigned long long int var_2 = 9297230116462345863ULL;
unsigned short var_7 = (unsigned short)48894;
int zero = 0;
unsigned long long int var_13 = 3206791013445412587ULL;
signed char var_14 = (signed char)-104;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
