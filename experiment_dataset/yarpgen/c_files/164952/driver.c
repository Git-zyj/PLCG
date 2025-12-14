#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1753441786;
unsigned long long int var_4 = 17072694490412908632ULL;
unsigned char var_9 = (unsigned char)171;
int zero = 0;
signed char var_10 = (signed char)86;
unsigned short var_11 = (unsigned short)26088;
signed char var_12 = (signed char)-31;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
