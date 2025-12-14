#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)58;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 17060317824660744208ULL;
unsigned int var_10 = 3376697862U;
unsigned short var_11 = (unsigned short)63744;
int zero = 0;
long long int var_12 = 2370065424976226677LL;
unsigned short var_13 = (unsigned short)21851;
unsigned char var_14 = (unsigned char)236;
unsigned char var_15 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
