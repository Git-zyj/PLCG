#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
int var_2 = -289886259;
_Bool var_4 = (_Bool)0;
int var_5 = -1903915424;
signed char var_8 = (signed char)(-127 - 1);
int zero = 0;
signed char var_12 = (signed char)-42;
unsigned char var_13 = (unsigned char)172;
signed char var_14 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
