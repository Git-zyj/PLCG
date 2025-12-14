#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3576540289U;
_Bool var_7 = (_Bool)1;
unsigned short var_13 = (unsigned short)47876;
int zero = 0;
short var_19 = (short)833;
unsigned int var_20 = 1587338780U;
unsigned long long int var_21 = 4101196267011382312ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
