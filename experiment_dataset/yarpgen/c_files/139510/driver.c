#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 672242842U;
short var_10 = (short)27190;
signed char var_14 = (signed char)14;
signed char var_16 = (signed char)100;
unsigned char var_18 = (unsigned char)155;
int zero = 0;
long long int var_20 = -2338321730761758530LL;
signed char var_21 = (signed char)-62;
signed char var_22 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
