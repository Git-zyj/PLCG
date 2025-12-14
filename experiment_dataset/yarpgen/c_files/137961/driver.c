#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3475239848U;
_Bool var_5 = (_Bool)0;
unsigned int var_12 = 4286365453U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 729951605U;
unsigned char var_15 = (unsigned char)133;
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
