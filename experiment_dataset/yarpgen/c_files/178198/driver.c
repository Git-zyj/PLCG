#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-71;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)3;
unsigned long long int var_12 = 18244874454765207720ULL;
int zero = 0;
signed char var_13 = (signed char)103;
signed char var_14 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
