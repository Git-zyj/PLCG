#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16417142379782429722ULL;
unsigned int var_6 = 307345219U;
unsigned char var_9 = (unsigned char)36;
unsigned int var_12 = 2918098401U;
unsigned int var_13 = 2231189272U;
int zero = 0;
int var_18 = -1488173824;
unsigned long long int var_19 = 6929961280483935128ULL;
short var_20 = (short)523;
unsigned int var_21 = 3581091700U;
void init() {
}

void checksum() {
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
