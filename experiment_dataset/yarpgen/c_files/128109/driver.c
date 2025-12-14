#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)47;
short var_11 = (short)-28851;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1628945130U;
short var_16 = (short)-1356;
int zero = 0;
unsigned char var_17 = (unsigned char)208;
unsigned char var_18 = (unsigned char)105;
short var_19 = (short)-31500;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
