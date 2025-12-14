#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)47403;
unsigned long long int var_18 = 15938406392546341708ULL;
signed char var_19 = (signed char)-6;
short var_20 = (short)-6343;
unsigned char var_21 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
