#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)61;
signed char var_7 = (signed char)95;
signed char var_8 = (signed char)98;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-27284;
signed char var_20 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
