#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4694;
unsigned int var_1 = 3961558498U;
short var_3 = (short)30816;
signed char var_4 = (signed char)-110;
int var_5 = -269712223;
unsigned long long int var_6 = 4540388204217771267ULL;
long long int var_7 = -7379765573927779950LL;
unsigned char var_8 = (unsigned char)147;
unsigned int var_9 = 2651770277U;
unsigned long long int var_11 = 11441715481433901029ULL;
int zero = 0;
long long int var_12 = -7177967020917473265LL;
signed char var_13 = (signed char)-33;
unsigned int var_14 = 1571044750U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
