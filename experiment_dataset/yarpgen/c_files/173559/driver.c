#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1790582771;
int var_5 = 478374029;
unsigned char var_8 = (unsigned char)165;
_Bool var_13 = (_Bool)0;
int var_17 = -2082872994;
int zero = 0;
unsigned int var_20 = 2473840300U;
unsigned int var_21 = 2794742998U;
int var_22 = 1795841010;
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
