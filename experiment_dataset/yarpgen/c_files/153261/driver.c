#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-61;
unsigned long long int var_5 = 11324862448689522352ULL;
signed char var_10 = (signed char)(-127 - 1);
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)85;
int var_21 = 1263749389;
void init() {
}

void checksum() {
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
