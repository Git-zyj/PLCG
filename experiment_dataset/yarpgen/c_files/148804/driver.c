#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)14;
_Bool var_5 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-93;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2033569364U;
short var_17 = (short)-2089;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
