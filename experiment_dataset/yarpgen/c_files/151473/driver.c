#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 17399363728509864591ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_15 = (unsigned char)25;
int zero = 0;
unsigned short var_17 = (unsigned short)10479;
signed char var_18 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
