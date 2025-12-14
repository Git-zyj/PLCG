#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1471395297U;
short var_2 = (short)-27447;
unsigned long long int var_3 = 14843248020684892188ULL;
signed char var_6 = (signed char)108;
short var_14 = (short)-23244;
long long int var_16 = -3984711771696703527LL;
int zero = 0;
unsigned short var_19 = (unsigned short)2849;
unsigned long long int var_20 = 9547340291377745806ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
