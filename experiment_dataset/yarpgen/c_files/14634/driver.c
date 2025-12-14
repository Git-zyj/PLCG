#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)169;
signed char var_4 = (signed char)-37;
unsigned int var_14 = 1460923496U;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_19 = 2083511063;
int var_20 = -552052529;
unsigned short var_21 = (unsigned short)24073;
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
