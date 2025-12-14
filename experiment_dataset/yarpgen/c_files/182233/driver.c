#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)62;
unsigned int var_6 = 3499245626U;
signed char var_7 = (signed char)92;
signed char var_10 = (signed char)114;
int zero = 0;
unsigned long long int var_14 = 5512743072112046348ULL;
unsigned short var_15 = (unsigned short)33579;
void init() {
}

void checksum() {
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
