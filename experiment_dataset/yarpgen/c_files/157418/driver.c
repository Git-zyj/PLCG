#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32682;
_Bool var_1 = (_Bool)1;
signed char var_8 = (signed char)64;
int zero = 0;
signed char var_18 = (signed char)-85;
unsigned int var_19 = 405319227U;
unsigned char var_20 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
