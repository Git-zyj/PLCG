#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-100;
_Bool var_5 = (_Bool)0;
int var_12 = -177454418;
int zero = 0;
unsigned long long int var_17 = 10239700514425557092ULL;
unsigned long long int var_18 = 7829183133681210683ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
