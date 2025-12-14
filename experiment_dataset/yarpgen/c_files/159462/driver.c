#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 8002772683842104385ULL;
unsigned long long int var_19 = 9007492612083483948ULL;
int zero = 0;
int var_20 = 1040086209;
unsigned short var_21 = (unsigned short)15625;
unsigned long long int var_22 = 5929000218346830321ULL;
unsigned short var_23 = (unsigned short)1215;
void init() {
}

void checksum() {
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
