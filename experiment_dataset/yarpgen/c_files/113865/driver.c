#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 6377845123487218708ULL;
short var_7 = (short)-27082;
unsigned long long int var_10 = 15678965904044088337ULL;
int zero = 0;
unsigned long long int var_12 = 4162564068890122094ULL;
unsigned short var_13 = (unsigned short)17947;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
