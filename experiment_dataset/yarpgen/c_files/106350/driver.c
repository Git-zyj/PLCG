#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11020978523771999061ULL;
unsigned char var_8 = (unsigned char)73;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)5937;
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
