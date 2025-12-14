#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 759085542;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)209;
signed char var_6 = (signed char)-29;
int zero = 0;
int var_10 = -569126172;
_Bool var_11 = (_Bool)1;
int var_12 = -1045977557;
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
