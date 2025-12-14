#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46356;
signed char var_3 = (signed char)-10;
unsigned long long int var_6 = 6486056381229276325ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 356100105U;
int zero = 0;
short var_12 = (short)4179;
int var_13 = -1559770618;
void init() {
}

void checksum() {
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
