#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-70;
unsigned long long int var_6 = 16005632291236544786ULL;
signed char var_14 = (signed char)54;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1727588466;
unsigned char var_21 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
