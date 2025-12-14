#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
int var_3 = 1684469688;
signed char var_11 = (signed char)-27;
short var_13 = (short)26425;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)24998;
unsigned short var_16 = (unsigned short)42604;
signed char var_17 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
